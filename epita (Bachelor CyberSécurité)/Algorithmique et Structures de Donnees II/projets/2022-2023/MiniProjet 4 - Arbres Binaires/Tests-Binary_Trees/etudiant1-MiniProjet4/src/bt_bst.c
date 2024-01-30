#include "bt_basics.h"
#include "bt_bst.h"
#include "queue_linked_list.h"

#include <stdlib.h>
#include <stdio.h>


bt_p *search_bt_p(int key, bt_p *T) {
    if (T == NULL){ return NULL; }
    if (T->key == key) { 
        return T; 
    } else if (T->key > key) {
        return search_bt_p(key, T->lc);
    } else {
        return search_bt_p(key, T->rc);
    }
    return NULL;
}

bt_p *search_verbose_bt_p(int key, bt_p *T) {
    if (T == NULL){ return NULL; }
    printf("%d\n", T->key);
    if (T->key == key) { 
        return T; 
    } else if (T->key > key) {
        return search_verbose_bt_p(key, T->lc);
    } else {
        return search_verbose_bt_p(key, T->rc);
    }
    return NULL;
}

bt_p *insert_leaf_bt_p(int key, int len_elt, void *elt, bt_p *T) {
    if (key <= 0){ return T; }
    if (T == NULL) {
        return create_bt_p(key, len_elt, elt, NULL, NULL);
    } else if (key <= T->key) {
        T->lc = insert_leaf_bt_p(key, len_elt, elt, T->lc);
    } else {
        T->rc = insert_leaf_bt_p(key, len_elt, elt, T->rc);
    }
    return T;
}

enum Direction {
    LEFT = 0,
    RIGHT
};

bt_p *get_position(int key, bt_p *T) {
    bt_p *left = T->lc;
    bt_p *right = T->rc;
    if (left != NULL && left->key == key){ return T; }
    if (right != NULL && right->key == key){ return T; }
    if (T->key > key) {
        return get_position(key, T->lc);
    } else {
        return get_position(key, T->rc);
    }
    return NULL;
}

void exchange(bt_p *want_delete) {
    bt_p *maximum;
    maximum = want_delete->lc;
    while (maximum->rc != NULL) {
        maximum = maximum->rc;
    }
    int tmp_key = maximum->key;
    int tmp_elt_size = maximum->elt_size;
    void *tmp_elt = maximum->elt;
    remove_node_bt_p(tmp_key, want_delete);
    want_delete->key = tmp_key;
    want_delete->elt_size = tmp_elt_size;
    want_delete->elt = tmp_elt;
}

bt_p *remove_node_bt_p(int key, bt_p *T) {
    if (T == NULL){ return NULL; }
    if (T->key == key) {
        if (T->lc == NULL && T->rc == NULL) {
            free(T);
            return NULL;
        } else if (T->lc == NULL) {
            bt_p *tmp = T->rc;
            free(T);
            return tmp;
        } else if (T->rc == NULL) {
            bt_p *tmp = T->lc;
            free(T);
            return tmp;
        } else {
           exchange(T);
           return T;
        }
    }

    bt_p *parent = get_position(key, T);
    if (parent == NULL){ return NULL; }
    enum Direction direction;
    bt_p *want_delete;
    if (parent->lc != NULL && (parent->lc)->key == key) {
        direction = LEFT;
        want_delete = parent->lc;
    } else {
        direction = RIGHT;
        want_delete = parent->rc;
    }

    if (want_delete->lc == NULL && want_delete->rc == NULL) {
        if (direction == LEFT) {
            parent->lc = NULL;
        } else {
            parent->rc = NULL;
        }
        free(want_delete);
    } else if (want_delete->lc == NULL) {
        if (direction == LEFT) {
            parent->lc = want_delete->rc;
        } else {
            parent->rc = want_delete->rc;
        }
        free(want_delete);
    } else if (want_delete->rc == NULL) {
        if (direction == LEFT) {
            parent->lc = want_delete->lc;
        } else {
            parent->rc = want_delete->lc;
        }
        free(want_delete);
    } else {
        exchange(want_delete);
    }

    return T;
}

int puissance(int base, int puissance) {
    int resultat = 1;
    for (int i = 0; i < puissance; i++) {
        resultat *= base;
    }
    return resultat;
}

void insert_bt_p_to_tab(bt_p *bt_p, bt_t *bt_t, int index) {
    if (bt_p == NULL){ return; }
    bt_t->keys[index] = bt_p->key;
    bt_t->elts_size[index] = bt_p->elt_size;
    bt_t->elts[index] = bt_p->elt;
    insert_bt_p_to_tab(bt_p->lc, bt_t, 2*index+1);
    insert_bt_p_to_tab(bt_p->rc, bt_t, 2*index+2);
}

bt_t *convert_bt_p_to_tab(bt_p *T) {
    if (T == NULL){ return NULL; }
    bt_t *tab = malloc(sizeof(bt_t));
    if (tab == NULL){ return NULL; }
    tab->tab_len = puissance(2, height_bt_p(T)+1) - 1;
    tab->tab_used = size_bt_p(T);
    tab->keys = malloc(sizeof(int) * tab->tab_len);
    if (tab->keys == NULL) {
        free(tab);
        return NULL;
    }
    tab->elts_size = malloc(sizeof(int) * tab->tab_len);
    if (tab->elts_size == NULL) {
        free(tab->keys);
        free(tab);
        return NULL;
    }
    tab->elts = malloc(sizeof(void * ) * tab->tab_len);
    if (tab->elts == NULL) {
        free(tab->elts_size);
        free(tab->keys);
        free(tab);
        return NULL;
    }
    for (int i = 0; i < tab->tab_len; i++) {
        tab->keys[i] = -1;
        tab->elts_size[i] = -1;
        tab->elts[i] = NULL;
    }
    insert_bt_p_to_tab(T, tab, 0);
    return tab;
}

void print_bt_t(bt_t *T_tab) {
    if (T_tab == NULL){ return; }
    for (int i = 0; i < T_tab->tab_len; i++) {
        printf("%d\n", T_tab->keys[i]);
    }
}
