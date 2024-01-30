#include "bt_basics.h"

#include "tests_bt_basics.h"

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  printf("----------------------\n");
  printf("| BINARY TREE BASICS |\n");
  printf("----------------------\n");

  main_regular_basics_tests();

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

void main_regular_basics_tests(void)
{
  //bt_p *my_empty_bt_p = NULL;
  bt_p *bin_tree = NULL;
  int ret;

  bt_p *bin_tree1 = NULL;
  bt_p *bin_tree2 = NULL;
  bt_p *ptr = NULL;

  int obj1 = 1664;
  int *obj2;
  int obj3 = 55;
  int objtab[] = { 666, 444, 555, 888, 999, 0 };
  int *objptr = NULL;
  obj2 = malloc(sizeof (int));
  (*obj2) = 1337;
  objptr = malloc(6 * sizeof (int));
  objptr[0] = 6;
  objptr[1] = 4;
  objptr[2] = 5;
  objptr[3] = 8;
  objptr[4] = 9;
  objptr[5] = 0;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  bin_tree1 = create_bt_p(1664, sizeof (int), &obj1, NULL, NULL);     // *
  bin_tree2 = create_bt_p(1337, sizeof (int), obj2, NULL, bin_tree1);   // * -
  bin_tree1 = create_bt_p(666, sizeof (int), &objtab[0], NULL, NULL); // *
  ptr = create_bt_p(444, sizeof (int), &objtab[1], NULL, NULL);       // *
  bin_tree2 = create_bt_p(555, sizeof (int), &objtab[2], bin_tree2, ptr); // * =
  ptr = create_bt_p(888, sizeof (int), &objtab[3], NULL, NULL);       // *
  bin_tree1 = create_bt_p(999, sizeof (int), &objtab[4], bin_tree1, ptr); // * =
  bin_tree2 = create_bt_p(6, sizeof (int), &objptr[0], bin_tree2, NULL); // * -
  ptr = create_bt_p(6, sizeof (int), &objptr[0], NULL, NULL);         // *
  bin_tree1 = create_bt_p(4, sizeof (int), &objptr[1], ptr, bin_tree1);   // * =
  ptr = create_bt_p(5, sizeof (int), &objptr[2], NULL, NULL);         // *
  ptr = create_bt_p(8, sizeof (int), &objptr[3], NULL, ptr);            // * -
  bin_tree1 = create_bt_p(9, sizeof (int), &objptr[4], ptr, bin_tree1);   // * =
  bin_tree = create_bt_p(55, sizeof (int), &obj3, bin_tree1, bin_tree2);  // * =

  ptr = NULL;
  bin_tree1 = NULL;
  bin_tree2 = NULL;

  /*
  **                  55
  **              /        \
  **           9             6
  **         /  \           /
  **        8    4         555
  **        \   / \        /  \
  **         5  6 999    1337 444
  **               / \     \
  **             666 888   1664
  */

  // Get Key
  ret = get_key_bt_p(bin_tree);
  printf("get_key_bt_p (bin_tree) [55] : %d\n", ret);
  test_output(ret, 55);
  ret = get_key_bt_p(bin_tree->lc);
  printf("get_key_bt_p (bin_tree->lc) [9] : %d\n", ret);
  test_output(ret, 9);
  ret = get_key_bt_p(bin_tree->lc->lc);
  printf("get_key_bt_p (bin_tree->lc->lc) [8] : %d\n", ret);
  test_output(ret, 8);
  ret = get_key_bt_p(bin_tree->lc->lc->rc);
  printf("get_key_bt_p (bin_tree->lc->lc->rc) [5] : %d\n", ret);
  test_output(ret, 5);
  ret = get_key_bt_p(bin_tree->lc->lc->lc);
  printf("get_key_bt_p (bin_tree->lc->lc->lc) [-1] : %d\n", ret);
  test_output(ret, -1);

  // get_elt_size_bt_p [incomplete test : add elements with various sizes]
  ret = get_elt_size_bt_p(bin_tree);
  printf("get_elt_size_bt_p (bin_tree obj3) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc);
  printf("get_elt_size_bt_p (bin_tree->lc objptr[4]) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc->lc);
  printf("get_elt_size_bt_p (bin_tree->lc->lc objptr[3]) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc->lc->rc);
  printf("get_elt_size_bt_p (bin_tree->lc->lc->rc objptr[2]) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc->lc->lc);
  printf("get_elt_size_bt_p (bin_tree->lc->lc NULL) [-1] : %d\n", ret);
  test_output(ret, -1);
  ret = get_elt_size_bt_p(bin_tree->rc->lc->lc->rc);
  printf("get_elt_size_p (bin_tree->lc->lc obj1) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->rc->lc->lc);
  printf("get_elt_size_p (bin_tree->lc->lc obj2) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc->rc->rc->lc);
  printf("get_elt_size_p (bin_tree->lc->rc->rc->lc objtab[0]) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));
  ret = get_elt_size_bt_p(bin_tree->lc->rc->rc);
  printf("get_elt_size_p (bin_tree->lc->rc->rc objtab[4]) [%lu] : %d\n", sizeof(int), ret);
  test_output(ret, sizeof (int));

  // get_elt_bt_p
  ptr = get_elt_bt_p(bin_tree);
  printf("get_elt_bt_p (bin_tree obj3) [%p] : %p\n", (void*) &obj3, (void*) ptr);
  test_address(ptr, &obj3);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc);
  printf("get_elt_bt_p (bin_tree->lc objptr[4]) [%p] : %p\n", (void*) &objptr[4], (void*) ptr);
  test_address(ptr, &objptr[4]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc->lc);
  printf("get_elt_bt_p (bin_tree->lc->lc objptr[3]) [%p] : %p\n", (void*) &objptr[3], (void*) ptr);
  test_address(ptr, &objptr[3]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc->lc->rc);
  printf("get_elt_bt_p (bin_tree->lc->lc->rc objptr[2]) [%p] : %p\n", (void*) &objptr[2], (void*) ptr);
  test_address(ptr, &objptr[2]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc->lc->lc);
  printf("get_elt_bt_p (bin_tree->lc->lc->lc NULL) [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->rc->lc->lc->rc);
  printf("get_elt_bt_p (bin_tree->lc->lc obj1) [%p] : %p\n", (void*) &objptr[3], (void*) ptr);
  test_address(ptr, &objptr[3]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->rc->lc->lc);
  printf("get_elt_bt_p (bin_tree->lc->lc obj2) [%p] : %p\n", (void*) &objptr[3], (void*) ptr);
  test_address(ptr, &objptr[3]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc->rc->rc->lc);
  printf("get_elt_bt_p (bin_tree->lc->rc->rc->lc objtab[0]) [%p] : %p\n", (void*) &objtab[0], (void*) ptr);
  test_address(ptr, &objtab[0]);
  ptr = NULL;
  ptr = get_elt_bt_p(bin_tree->lc->rc->rc);
  printf("get_elt_bt_p (bin_tree->lc->rc->rc objtab[4]) [%p] : %p\n", (void*) &objtab[4], (void*) ptr);
  test_address(ptr, &objtab[4]);
  ptr = NULL;

  /*
  **                  55
  **              /        \
  **           9             6
  **         /  \           /
  **        8    4         555
  **        \   / \        /  \
  **         5  6 999    1337 444
  **               / \     \
  **             666 888   1664
  */

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
  ret = deepness_node_bt_p(bin_tree->rc->lc->lc->rc, bin_tree);
  printf("deepness_node_bt_p (bin_tree->rc->lc->lc->rc) [4] : %d\n", ret);
  test_output(ret, 4);

  // size_bt_p 14
  ret = size_bt_p(bin_tree);
  printf("size_bt_p (bin_tree) [14] : %d\n", ret);
  test_output(ret, 14);

  // height_bt_p 4
  ret = height_bt_p(bin_tree);
  printf("height_bt_p (bin_tree) [4] : %d\n", ret);
  test_output(ret, 4);

  // DFS preorder
  printf("print_dfs_preorder_bt_p : [Pre Order]\n");
  printf("[ 55 ; 9 ; 8 ; 5 ; 4 ; 6 ; 999 ; 666 ; 888 ; 6 ; 555 ; 1337 ; 1664 ; 444 ]\n");
  print_dfs_preorder_bt_p(bin_tree);
  // DFS inorder
  printf("print_dfs_inorder_bt_p : [In Order]\n");
  printf("[ 8 ; 5 ; 9 ; 6 ; 4 ; 666 ; 999 ; 888 ; 55 ; 1337 ; 1664 ; 555 ; 444 ; 6 ]\n");
  print_dfs_inorder_bt_p(bin_tree);
  // DFS postorder
  printf("print_dfs_postorder_bt_p : [Post Order]\n");
  printf("[ 5 ; 8 ; 6 ; 666 ; 888 ; 999 ; 4 ; 9 ; 1664 ; 1337 ; 444 ; 555 ; 6 ; 55 ]\n");
  print_dfs_postorder_bt_p(bin_tree);

  // Hierarchical order
  printf("print_hierarchical_bt_p : [Hierarchical]\n");
  printf("[ 55 ; 9 ; 6 ; 8 ; 4 ; 555 ; 5 ; 6 ; 999 ; 1337 ; 444 ; 666 ; 888 ; 1664 ]\n");
  print_hierarchical_bt_p(bin_tree);

  /*
  **                  55
  **              /        \
  **           9             6
  **         /  \           /
  **        8    4         555
  **        \   / \        /  \
  **         5  6 999    1337 444
  **               / \     \
  **             666 888   1664
  */

  // Hierarchical number
  ret = hierarchical_number_bt_p(bin_tree, 55);
  printf("hierarchical_number_bt_p bin_tree 55 [1] : %d\n", ret);
  test_output(ret, 1);
  ret = hierarchical_number_bt_p(bin_tree, 9);
  printf("hierarchical_number_bt_p bin_tree 9 [2] : %d\n", ret);
  test_output(ret, 2);
  ret = hierarchical_number_bt_p(bin_tree, 6);
  printf("hierarchical_number_bt_p bin_tree 6 [3] : %d\n", ret);
  test_output(ret, 3);
  ret = hierarchical_number_bt_p(bin_tree, 8);
  printf("hierarchical_number_bt_p bin_tree 8 [4] : %d\n", ret);
  test_output(ret, 4);
  ret = hierarchical_number_bt_p(bin_tree, 4);
  printf("hierarchical_number_bt_p bin_tree 4 [5] : %d\n", ret);
  test_output(ret, 5);
  ret = hierarchical_number_bt_p(bin_tree, 555);
  printf("hierarchical_number_bt_p bin_tree 555 [6] : %d\n", ret);
  test_output(ret, 6);
  ret = hierarchical_number_bt_p(bin_tree, 5);
  printf("hierarchical_number_bt_p bin_tree 5 [9] : %d\n", ret);
  test_output(ret, 9);
  ret = hierarchical_number_bt_p(bin_tree, 6);
  printf("hierarchical_number_bt_p bin_tree 6 [10] : %d\n", ret);
  test_output(ret, 10);
  ret = hierarchical_number_bt_p(bin_tree, 999);
  printf("hierarchical_number_bt_p bin_tree 999 [11] : %d\n", ret);
  test_output(ret, 11);
  ret = hierarchical_number_bt_p(bin_tree, 1337);
  printf("hierarchical_number_bt_p bin_tree 1337 [12] : %d\n", ret);
  test_output(ret, 12);
  ret = hierarchical_number_bt_p(bin_tree, 444);
  printf("hierarchical_number_bt_p bin_tree 444 [13] : %d\n", ret);
  test_output(ret, 13);
  ret = hierarchical_number_bt_p(bin_tree, 666);
  printf("hierarchical_number_bt_p bin_tree 666 [22] : %d\n", ret);
  test_output(ret, 22);
  ret = hierarchical_number_bt_p(bin_tree, 888);
  printf("hierarchical_number_bt_p bin_tree 888 [23] : %d\n", ret);
  test_output(ret, 23);
  ret = hierarchical_number_bt_p(bin_tree, 1664);
  printf("hierarchical_number_bt_p bin_tree 1664 [25] : %d\n", ret);
  test_output(ret, 25);


  // clear_bt_p NULL
  ret = clear_bt_p(bin_tree);
  printf("clear_bt_p (bin_tree) [14] : %d\n", ret);
  test_output(ret, 14);

  free(obj2);
  free(objptr);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
