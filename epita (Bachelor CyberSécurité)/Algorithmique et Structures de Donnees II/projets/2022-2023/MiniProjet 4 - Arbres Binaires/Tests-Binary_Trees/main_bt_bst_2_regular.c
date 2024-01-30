#include "bt_bst.h"

#include "tests_bt_bst.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("----------------------\n");
  printf("| BINARY SEARCH TREE |\n");
  printf("----------------------\n");

  main_regular_bst_tests();

  return (0);
}

void test_address(void *ptr, void *expected_result)
{
  if (ptr == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_regular_bst_tests(void)
{
  bt_p *bin_tree = NULL;
  int ret;

  bt_p *bin_tree1 = NULL;
  bt_p *bin_tree2 = NULL;
  bt_p *ptr = NULL;
  bt_t *out_tab1 = NULL;
  bt_t *out_tab2 = NULL;

  int obj1 = 64;
  int *obj2;
  int obj3 = 32;
  int objtab[] = { 4, 10, 16, 24, 42, 0 };
  int *objptr = NULL;
  obj2 = malloc(sizeof (int));
  (*obj2) = 1337;
  objptr = malloc(6 * sizeof (int));
  objptr[0] = 128;
  objptr[1] = 242;
  objptr[2] = 343;
  objptr[3] = 404;
  objptr[4] = 555;
  objptr[5] = 666;
  int *ptr_elt = NULL;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // Build an example tree
  bin_tree1 = create_bt_p(64, sizeof (int), &obj1, NULL, NULL);     // *
  bin_tree2 = create_bt_p(128, sizeof (int), &objptr[0], bin_tree1, NULL);   // * -
  bin_tree1 = NULL;

  /*
  **    128
  **    /
  **   64
  */

  bin_tree2 = insert_leaf_bt_p(242, sizeof (int), &objptr[1], bin_tree2);
  bin_tree2 = insert_leaf_bt_p(1337, sizeof (int), obj2, bin_tree2);
  bin_tree2 = insert_leaf_bt_p(32, sizeof (int), &obj3, bin_tree2);
  bin_tree2 = insert_leaf_bt_p(10, sizeof (int), &objtab[1], bin_tree2);
  bin_tree2 = insert_leaf_bt_p(24, sizeof (int), &objtab[3], bin_tree2);
  bin_tree2 = insert_leaf_bt_p(42, sizeof (int), &objtab[4], bin_tree2);

  /*
  **        128
  **        / \
  **       64  242
  **      /      \
  **     32      1337
  **    /  \
  **   10  42
  **    \
  **    24
  */

  // Build another example tree from nothing
  bin_tree = insert_leaf_bt_p(242, sizeof (int), &objptr[1], bin_tree);
  bin_tree = insert_leaf_bt_p(128, sizeof (int), &objptr[0], bin_tree);
  bin_tree = insert_leaf_bt_p(555, sizeof (int), &objptr[4], bin_tree);
  bin_tree = insert_leaf_bt_p(404, sizeof (int), &objptr[3], bin_tree);
  bin_tree = insert_leaf_bt_p(343, sizeof (int), &objptr[2], bin_tree);
  bin_tree = insert_leaf_bt_p(666, sizeof (int), &objptr[5], bin_tree);
  bin_tree = insert_leaf_bt_p(24, sizeof (int), &objtab[3], bin_tree);
  bin_tree = insert_leaf_bt_p(42, sizeof (int), &objtab[4], bin_tree);
  bin_tree = insert_leaf_bt_p(64, sizeof (int), &obj1, bin_tree);
  bin_tree = insert_leaf_bt_p(32, sizeof (int), &obj3, bin_tree);
  bin_tree = insert_leaf_bt_p(16, sizeof (int), &objtab[2], bin_tree);
  bin_tree = insert_leaf_bt_p(4, sizeof (int), &objtab[0], bin_tree);
  bin_tree = insert_leaf_bt_p(10, sizeof (int), &objtab[1], bin_tree);

  /*
  **             242
  **           /     \
  **        128       555
  **       /         /   \
  **      24       404   666
  **     /  \      /
  **   16   42    343
  **   /    / \
  **  4   32  64
  **   \
  **   10
  */

  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **        128       555                   64   242
  **       /         /   \                  /     \
  **      24       404   666               32     1337
  **     /  \      /                      /  \
  **   16   42    343                    10  42
  **   /    / \                           \
  **  4   32  64                          24
  **   \
  **   10
  */

  // Get Key
  ret = get_key_bt_p(bin_tree);
  printf("get_key_bt_p (bin_tree) [242] : %d\n", ret);
  test_output(ret, 242);
  ret = get_key_bt_p(bin_tree->rc->lc);
  printf("get_key_bt_p (bin_tree) [404] : %d\n", ret);
  test_output(ret, 404);
  ret = get_key_bt_p(bin_tree->lc->lc->rc);
  printf("get_key_bt_p (bin_tree->lc->lc->rc) [42] : %d\n", ret);
  test_output(ret, 42);

  // deepness_node_bt_p
  ret = deepness_node_bt_p(bin_tree, bin_tree);
  printf("deepness_node_bt_p (bin_tree) [0] : %d\n", ret);
  test_output(ret, 0);
  ret = deepness_node_bt_p(bin_tree->lc, bin_tree);
  printf("deepness_node_bt_p (bin_tree->lc) [1] : %d\n", ret);
  test_output(ret, 1);
  ret = deepness_node_bt_p(bin_tree->lc->lc, bin_tree);
  printf("deepness_node_bt_p (bin_tree->lc->lc) [2] : %d\n", ret);
  test_output(ret, 2);
  ret = deepness_node_bt_p(bin_tree->lc->lc->rc, bin_tree);
  printf("deepness_node_bt_p (bin_tree->lc->lc->rc) [3] : %d\n", ret);
  test_output(ret, 3);
  ret = deepness_node_bt_p(bin_tree->lc->lc->rc->rc, bin_tree);
  printf("deepness_node_bt_p (bin_tree->lc->lc->rc->rc) [4] : %d\n", ret);
  test_output(ret, 4);

  // size_bt_p
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [13] : %d\n", ret);
  test_output(ret, 13);
  ret = size_bt_p(bin_tree2);
  printf("size_bt_p (bin_tree2) [8] : %d\n", ret);
  test_output(ret, 8);

  // height_bt_p
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [5] : %d\n", ret);
  test_output(ret, 5);
  ret = height_bt_p(bin_tree2);
  printf("height_bt_p (bin_tree2) [4] : %d\n", ret);
  test_output(ret, 4);

  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **        128       555                   64   242
  **       /         /   \                  /     \
  **      24       404   666               32     1337
  **     /  \      /                      /  \
  **   16   42    343                    10  42
  **   /    / \                           \
  **  4   32  64                          24
  **   \
  **   10
  */

  // Search key
  ptr = search_bt_p(242, bin_tree);
  ptr_elt = get_elt_bt_p(ptr);
  printf("search_bt_p 242 bin_tree [%p] : %p\n", (void*) &objptr[1], (void*) ptr_elt);
  test_address(ptr_elt, &objptr[1]);
  ret = deepness_node_bt_p(ptr, bin_tree);
  printf("deepness_node_bt_p 242 [0] : %d\n", ret);
  test_output(ret, 0);
  ptr = search_bt_p(42, bin_tree);
  ptr_elt = get_elt_bt_p(ptr);
  printf("search_bt_p 42 bin_tree [%p] : %p\n", (void*) &objtab[4], (void*) ptr_elt);
  test_address(ptr_elt, &objtab[4]);
  ret = deepness_node_bt_p(ptr, bin_tree);
  printf("deepness_node_bt_p 42 [3] : %d\n", ret);
  test_output(ret, 3);
  ptr = search_bt_p(343, bin_tree);
  ptr_elt = get_elt_bt_p(ptr);
  printf("search_bt_p 343 bin_tree [%p] : %p\n", (void*) &objptr[2], (void*) ptr_elt);
  test_address(ptr_elt, &objptr[2]);
  ret = deepness_node_bt_p(ptr, bin_tree);
  printf("deepness_node_bt_p 343 [3] : %d\n", ret);
  test_output(ret, 3);
  ptr = search_bt_p(32, bin_tree);
  ptr_elt = get_elt_bt_p(ptr);
  printf("search_bt_p 32 bin_tree [%p] : %p\n", (void*) &obj3, (void*) ptr_elt);
  test_address(ptr_elt, &obj3);
  ret = deepness_node_bt_p(ptr, bin_tree);
  printf("deepness_node_bt_p 32 [4] : %d\n", ret);
  test_output(ret, 4);
  ptr = search_bt_p(1337, bin_tree);
  printf("search_bt_p 1337 bin_tree [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Search key verbose NULL
  printf("search_verbose_bt_p 1664 bin_tree (242)\n");
  ptr = search_verbose_bt_p(1664, bin_tree);
  printf("RES search_verbose_bt_p 1664 bin_tree [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);
  printf("search_verbose_bt_p 10 bin_tree (242-128-24-16-4-10\n");
  ptr = search_verbose_bt_p(10, bin_tree);
  ptr = get_elt_bt_p(ptr);
  printf("RES search_verbose_bt_p 10 bin_tree [%p] : %p\n", (void*) &objtab[1], (void*) ptr);
  test_address(ptr, &objtab[1]);
  printf("search_verbose_bt_p 32 bin_tree (242-128-24-42-32)\n");
  ptr = search_verbose_bt_p(32, bin_tree);
  ptr = get_elt_bt_p(ptr);
  printf("search_verbose_bt_p 32 bin_tree [%p] : %p\n", (void*) &obj3, (void*) ptr);
  test_address(ptr, &obj3);

  // Convert BT_P to tab
  printf("convert_bt_p_to_tab (bin_tree) :\n");
  out_tab1 = convert_bt_p_to_tab(bin_tree);
  printf("convert_bt_p_to_tab (bin_tree2) :\n");
  out_tab2 = convert_bt_p_to_tab(bin_tree2);

  // Print BT_P like a tab
  printf("print_bt_t (out_tab1 / bin_tree)\n");
  print_bt_t(out_tab1);
  printf("print_bt_t (out_tab2 / bin_tree2)\n");
  print_bt_t(out_tab2);

  free(out_tab1);
  free(out_tab2);

  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **        128       555                   64   242
  **       /         /   \                  /     \
  **      24       404   666               32     1337
  **     /  \      /                      /  \
  **   16   42    343                    10  42
  **   /    / \                           \
  **  4   32  64                          24
  **   \
  **   10
  */

  // Remove node NULL
  ptr = remove_node_bt_p(1337, bin_tree);
  printf("remove_node_bt_p 1337 bin_tree (NULL) [%p] : %p\n",
	 (void*) bin_tree,
	 (void*) ptr);
  test_address(ptr, bin_tree);

  // size_bt_p 13 & height_bt_p 5
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [13] : %d\n", ret);
  test_output(ret, 13);
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [5] : %d\n", ret);
  test_output(ret, 5);

  // Convert & Print tree
  printf("Convert & Print (bin_tree)\n");
  out_tab1 = convert_bt_p_to_tab(bin_tree);
  print_bt_t(out_tab1);
  free(out_tab1);


  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **        128       555                   64   242
  **       /         /   \                  /     \
  **      24       404   666               32     1337
  **     /  \      /                      /  \
  **   16   42    343                    10  42
  **   /    / \                           \
  **  4   32  64 <---                     24
  **   \
  **   10
  */

  // Remove node Leaf
  ptr = remove_node_bt_p(64, bin_tree);
  printf("remove_node_bt_p 64 bin_tree (Leaf) [%p] : %p\n",
	 (void*) bin_tree,
	 (void*) ptr);
  test_address(ptr, bin_tree);

  // size_bt_p 12 & height_bt_p 5
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [12] : %d\n", ret);
  test_output(ret, 12);
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [5] : %d\n", ret);
  test_output(ret, 5);

  // Search for deleted node
  ptr = search_bt_p(64, bin_tree);
  printf("search_bt_p 64 bin_tree [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Convert & Print tree
  printf("Convert & Print (bin_tree)\n");
  out_tab1 = convert_bt_p_to_tab(bin_tree);
  print_bt_t(out_tab1);
  free(out_tab1);

  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **   |    128       555                   64   242
  **   |   /         /   \                  /     \
  **   |  24       404   666               32     1337
  **   v /  \      /                      /  \
  **   16   42   343                    10  42
  **   /    /                             \
  **  4   32                              24
  **   \
  **   10
  */

  // Remove node Single point
  ptr = remove_node_bt_p(16, bin_tree);
  printf("remove_node_bt_p 16 bin_tree (Single point) [%p] : %p\n",
	 (void*) bin_tree,
	 (void*) ptr);
  test_address(ptr, bin_tree);

  // size_bt_p 11 & height_bt_p 4
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [11] : %d\n", ret);
  test_output(ret, 11);
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [4] : %d\n", ret);
  test_output(ret, 4);

  // Search for deleted node
  ptr = search_bt_p(16, bin_tree);
  printf("search_bt_p 16 bin_tree [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Convert & Print tree
  printf("Convert & Print (bin_tree)\n");
  out_tab1 = convert_bt_p_to_tab(bin_tree);
  print_bt_t(out_tab1);
  free(out_tab1);

  /*
  **          bin_tree                       bin_tree2
  **
  **             242                          128
  **           /     \                       /   \
  **        128       555                   64   242
  **       /         /   \                  /     \
  **  --->24       404   666               32     1337
  **     /  \      /                      /  \
  **    4    42   343                    10  42
  **    \    /                            \
  **    10 32                             24
  */

  // Remove node Double point
  ptr = remove_node_bt_p(24, bin_tree);
  printf("remove_node_bt_p 24 bin_tree (Double point) [%p] : %p\n",
	 (void*) bin_tree,
	 (void*) ptr);
  test_address(ptr, bin_tree);

  // size_bt_p 10 & height_bt_p 4
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [10] : %d\n", ret);
  test_output(ret, 10);
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [4] : %d\n", ret);
  test_output(ret, 4);

  // Search for deleted node
  ptr = search_bt_p(24, bin_tree);
  printf("search_bt_p 24 bin_tree [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Convert & Print tree
  printf("Convert & Print (bin_tree)\n");
  out_tab1 = convert_bt_p_to_tab(bin_tree);
  print_bt_t(out_tab1);
  free(out_tab1);

  // Clear trees
  ret = clear_bt_p(bin_tree);
  printf("clear_bt_p (bin_tree) [10] : %d\n", ret);
  test_output(ret, 10);
  ret = clear_bt_p(bin_tree2);
  printf("clear_bt_p (bin_tree2) [8] : %d\n", ret);
  test_output(ret, 8);

  free(objptr);
  free(obj2);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
