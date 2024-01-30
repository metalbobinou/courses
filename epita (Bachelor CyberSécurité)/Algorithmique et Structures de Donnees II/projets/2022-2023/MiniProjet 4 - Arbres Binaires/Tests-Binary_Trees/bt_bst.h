#ifndef BT_BST_H_
# define BT_BST_H_

# include "bt_basics.h"

/* Binary Tree in array format */
struct bt_t
{
  int tab_len;     // size of the array (power of 2)
  int tab_used;    // number of cells used in the array
  int *keys;       // array of keys
  int *elts_size;  // array of size in memory of elements
  void **elts;     // array of addresses of elements
};

typedef struct bt_t bt_t;

/* Search the node containing the key in the tree T with the BST rules */
bt_p *search_bt_p(int key, bt_p *T);
/* Make the search, and print each encountered node */
bt_p *search_verbose_bt_p(int key, bt_p *T);

/* Insert a new node as a leaf following the BST rules */
bt_p *insert_leaf_bt_p(int key,
                       int len_elt,
                       void *elt,
                       bt_p *T);

/* Remove a node following the BST rules (+ biggest node in the left child) */
bt_p *remove_node_bt_p(int key, bt_p *T);

/* Convert a bt_p tree (pointer) into a bt_t tree (array) */
bt_t *convert_bt_p_to_tab(bt_p *T);
/* Print keys of a bt_t in hierarchical order (1 key per line) */
void print_bt_t(bt_t *T_tab);

/* BONUS : insert a new node as a root with cut technique */
bt_p *insert_root_cut_bt_p(int key, // BONUS
                           int len_elt,
                           void *elt,
                           bt_p *T);

/* BONUS : insert a new node as a root with rotations technique */
bt_p *insert_root_rot_bt_p(int key, // BONUS
                           int len_elt,
                           void *elt,
                           bt_p *T);

#endif /* !BT_BST_H_ */
