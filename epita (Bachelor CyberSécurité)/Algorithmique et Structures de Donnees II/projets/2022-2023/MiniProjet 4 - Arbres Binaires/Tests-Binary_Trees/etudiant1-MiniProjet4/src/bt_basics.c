#include "bt_basics.h"
#include "queue_linked_list.h"

#include <stdlib.h>
#include <stdio.h>


bt_p *create_bt_p(int key, int elt_size, void *elt, bt_p *left_child, bt_p *right_child) {
    bt_p *new = malloc(sizeof(bt_p));
    if (new == NULL){ return NULL; }
    new->key = key;
    new->elt_size = elt_size;
    new->elt = elt;
    new->lc = left_child;
    new->rc = right_child;
    return new;
}

int get_key_bt_p(bt_p *node) {
    if (node == NULL){ return -1; }
    return node->key;
}

int get_elt_size_bt_p(bt_p *node) {
    if (node == NULL){ return -1; }
    return node->elt_size;
}

void *get_elt_bt_p(bt_p *node) {
   if (node == NULL){ return NULL; }
   return node->elt;
}

int deepness_node_bt_p(bt_p *node, bt_p *T) {
    if (node == NULL || T == NULL){ return -1; }
    if (node->key == T->key){ return 0; }
    int left = deepness_node_bt_p(node, T->lc);
    if (left != -1) { 
        return left + 1; 
    }
    int right = deepness_node_bt_p(node, T->rc);
    if (right != -1) { 
        return right + 1; 
    }
    return -1;
}

int size_bt_p(bt_p *T) {
    if (T == NULL){ return 0; }
    return size_bt_p(T->lc) + size_bt_p(T->rc) + 1;
}

int height_bt_p(bt_p *T) {
    if (T == NULL) { 
        return -1; 
    } else if (T->lc == NULL && T->rc == NULL) {
        return 0;
    }
    int left = height_bt_p(T->lc);
    int right = height_bt_p(T->rc);
    int bigger = left > right ? left : right;
    return bigger + 1;
}

void print_dfs_preorder_bt_p(bt_p *T) {
    if (T == NULL){ return; }
    printf("%d\n", T->key);
    print_dfs_preorder_bt_p(T->lc);
    print_dfs_preorder_bt_p(T->rc);
}

void print_dfs_inorder_bt_p(bt_p *T) {
    if (T == NULL){ return; }
    print_dfs_inorder_bt_p(T->lc);
    printf("%d\n", T->key); 
    print_dfs_inorder_bt_p(T->rc);
}

void print_dfs_postorder_bt_p(bt_p *T) {
    if (T == NULL){ return; }
    print_dfs_postorder_bt_p(T->lc);
    print_dfs_postorder_bt_p(T->rc);
    printf("%d\n", T->key);  
}

void print_hierarchical_bt_p(bt_p *T) {
    if (T == NULL){ return; }
    queue_ll *queue = queue_ll_create();
    if (queue == NULL) { return; }
    queue_ll_enqueue(T, queue);
    while (!queue_ll_is_empty(queue)) {
        bt_p *tmp = queue_ll_head(queue);
        if (tmp->lc != NULL)
            queue_ll_enqueue(tmp->lc, queue);
        if (tmp->rc != NULL)
            queue_ll_enqueue(tmp->rc, queue);
        printf("%d\n", tmp->key);
        queue_ll_dequeue(queue);
    }
    queue_ll_delete(queue);
}

int hierarchical_number_bt_p(bt_p *T, int key) {
    if (T == NULL){ return -1; }
    if (T->key == key){ return 1; }
    int left = hierarchical_number_bt_p(T->lc, key);
    int right = hierarchical_number_bt_p(T->rc, key);
    if (left > 0)
        return (2 * left);
    if (right > 0)
        return (2 * right + 1);
    return -1;
}

int clear_bt_p(bt_p *T) {
    if (T == NULL){ return 0; }
    int nbDelete = 0;
    nbDelete += clear_bt_p(T->lc);
    nbDelete += clear_bt_p(T->rc);
    nbDelete++;
    free(T);
    return nbDelete;
}
