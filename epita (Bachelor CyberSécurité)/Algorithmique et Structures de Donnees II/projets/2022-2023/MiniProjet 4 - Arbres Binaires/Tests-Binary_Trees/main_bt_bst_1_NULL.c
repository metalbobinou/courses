#include "bt_bst.h"

#include "tests_bt_bst.h"

#include <stdio.h>

int main(void)
{
  printf("----------------------\n");
  printf("| BINARY SEARCH TREE |\n");
  printf("----------------------\n");

  main_null_bst_tests();

  return (0);
}

void test_address(void *ptr, void *expected_result)
{
  if (ptr == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_null_bst_tests(void)
{
  bt_p *ptr = NULL;
  bt_t *out_tab = NULL;
  //int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Search key NULL
  ptr = search_bt_p(42, NULL);
  printf("search_bt_p 42 NULL [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Search key verbose NULL
  printf("search_verbose_bt_p 1664 NULL [NULL] : %p\n", (void*) ptr);
  ptr = search_verbose_bt_p(1664, NULL);
  test_address(ptr, NULL);

  // Remove node NULL
  ptr = remove_node_bt_p(1337, NULL);
  printf("remove_node_bt_p 1337 NULL [NULL] : %p\n", (void*) ptr);
  test_address(ptr, NULL);

  // Convert BT_P to tab
  out_tab = convert_bt_p_to_tab(NULL);
  printf("convert_bt_p_to_tab NULL [NULL] : %p\n", (void*) out_tab);
  test_address(out_tab, NULL);

  // Print BT_P like a tab
  printf("print_bt_t NULL [nothing should be printed]\n");
  print_bt_t(NULL);

  printf("##################\n");
  printf("# END NULL TESTS #\n");
  printf("##################\n");
}
