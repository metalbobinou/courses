#include "list_linked_test_1.h"

#include <stdio.h>

void list_linked_test_1(void)
{
  printf("-------------------------\n");
  printf("| LIST LINKED (1) EMPTY |\n");
  printf("-------------------------\n");

  main_list_linked_null_tests();
}

void main_list_linked_null_tests(void)
{
  list_linked *ptr;
  int ret;

  //printf("##############\n");
  //printf("# NULL TESTS #\n");
  //printf("##############\n");

  // Is empty
  ret = is_empty_list_linked(NULL);
  printf("is_empty_list_linked(NULL) [1] : %d\n", ret);
  test_output(ret, 1);

  // Length list
  ret = length_list_linked(NULL);
  printf("length_list_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);

  // Print list
  print_list_linked(NULL);
  printf("print_list_linked(NULL) *nothing* : (see above)\n");

  // Del list (1)
  ptr = del_elt_list_linked(NULL, 42);
  printf("del_elt_list_linked(NULL, 42) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Del list (2)
  ptr = del_elt_list_linked(NULL, 0);
  printf("del_elt_list_linked(NULL, 0) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Del list (3)
  ptr = del_elt_list_linked(NULL, -5);
  printf("del_elt_list_linked(NULL, -5) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Search list
  ret = search_elt_list_linked(NULL, 42);
  printf("search_elt_list_linked(NULL, 42) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Get Elt list (1)
  ret = get_elt_list_linked(NULL, 1337);
  printf("get_elt_list_linked(NULL, 1337) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Get Elt list (2)
  ret = get_elt_list_linked(NULL, 0);
  printf("get_elt_list_linked(NULL, 0) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Get Elt list (3)
  ret = get_elt_list_linked(NULL, -8);
  printf("get_elt_list_linked(NULL, -8) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Clear list
  ret = clear_list_linked(NULL);
  printf("clear_list_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);
}
