#ifndef BT_BASICS_H_
# define BT_BASICS_H_

/* Binary Tree in pointer format */
struct bt_p
{
  int key;          // key of the element
  int elt_size;     // size in memory of the element
  void *elt;        // address of the element
  struct bt_p *lc;  // left child
  struct bt_p *rc;  // right child
};

typedef struct bt_p bt_p;

/* Create a node and fill the structure */
bt_p *create_bt_p(int key,
                  int elt_size,
                  void *elt,
                  bt_p *left_child,
                  bt_p *right_child);
/* Get the key value stored in a node */
int get_key_bt_p(bt_p *node);
/* Get the size in memory of the element referenced by a node */
int get_elt_size_bt_p(bt_p *node);
/* Get the address of the element referenced by a node */
void *get_elt_bt_p(bt_p *node);

/* Get the deepness of a node within the tree T */
int deepness_node_bt_p(bt_p *T, bt_p *node);
/* Get the size of the tree T */
int size_bt_p(bt_p *T);
/* Get the height of the tree T */
int height_bt_p(bt_p *T);

/* Print nodes of a tree in Depth-First Search preorder */
void print_dfs_preorder_bt_p(bt_p *T);
/* Print nodes of a tree in Depth-First Search inorder */
void print_dfs_inorder_bt_p(bt_p *T);
/* Print nodes of a tree in Depth-First Search postorder */
void print_dfs_postorder_bt_p(bt_p *T);

/* Print nodes of a tree in Breadth-First Search order */
void print_hierarchical_bt_p(bt_p *T);
/* Get the hierarchical number of the node containing the given key */
int hierarchical_number_bt_p(bt_p *T, int key);

/* Clear the tree by freeing each node, but NOT the elements */
int clear_bt_p(bt_p *T);

#endif /* !BT_BASICS_H_ */
