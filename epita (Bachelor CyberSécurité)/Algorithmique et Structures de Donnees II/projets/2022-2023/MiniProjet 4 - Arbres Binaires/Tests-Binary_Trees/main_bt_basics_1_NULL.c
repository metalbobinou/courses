#include "bt_basics.h"

#include "tests_bt_basics.h"

#include <stdio.h>

int main(void)
{
  printf("----------------------\n");
  printf("| BINARY TREE BASICS |\n");
  printf("----------------------\n");

  main_null_basics_tests();

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

void main_null_basics_tests(void)
{
  bt_p *ptr = NULL;
  int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Get Key NULL
  ret = get_key_bt_p(NULL);
  printf("get_key_bt_p NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // get_elt_size_bt_p NULL
  ret = get_elt_size_bt_p(NULL);
  printf("get_elt_size_bt_p NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // get_elt_bt_p NULL
  ptr = get_elt_bt_p(NULL);
  printf("get_elt_bt_p NULL [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // deepness_node_bt_p NULL
  ptr = create_bt_p(42, 0, NULL, NULL, NULL);
  ret = deepness_node_bt_p(NULL, NULL);
  printf("deepness_node_bt_p NULL NULL [-1] : %d\n", ret);
  test_output(ret, -1);
  ret = deepness_node_bt_p(ptr, NULL);
  printf("deepness_node_bt_p *nil* NULL [-1] : %d\n", ret);
  test_output(ret, -1);
  ret = deepness_node_bt_p(NULL, ptr);
  printf("deepness_node_bt_p NULL *nil* [-1] : %d\n", ret);
  test_output(ret, -1);
  clear_bt_p(ptr);

  // size_bt_p NULL
  ret = size_bt_p(NULL);
  printf("size_bt_p NULL [0] : %d\n", ret);
  test_output(ret, 0);

  // height_bt_p NULL
  ret = height_bt_p(NULL);
  printf("height_bt_p NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // DFS preorder
  printf("print_dfs_preorder_bt_p NULL [nothing should be printed]\n");
  print_dfs_preorder_bt_p(NULL);
  // DFS inorder
  printf("print_dfs_inorder_bt_p NULL [nothing should be printed]\n");
  print_dfs_inorder_bt_p(NULL);
  // DFS postorder
  printf("print_dfs_postorder_bt_p NULL [nothing should be printed]\n");
  print_dfs_postorder_bt_p(NULL);

  // Hierarchical order
  printf("print_hierarchical_bt_p NULL [nothing should be printed]\n");
  print_hierarchical_bt_p(NULL);
  // Hierarchical number
  ret = hierarchical_number_bt_p(NULL, 42);
  printf("hierarchical_number_bt_p NULL 42 [-1] : %d\n", ret);
  test_output(ret, -1);

  // clear_bt_p NULL
  ret = clear_bt_p(NULL);
  printf("clear_bt_p NULL [0] : %d\n", ret);
  test_output(ret, 0);

  printf("##################\n");
  printf("# END NULL TESTS #\n");
  printf("##################\n");
}
