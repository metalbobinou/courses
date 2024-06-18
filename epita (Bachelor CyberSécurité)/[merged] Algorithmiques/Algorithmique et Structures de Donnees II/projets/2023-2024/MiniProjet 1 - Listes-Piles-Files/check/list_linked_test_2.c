#include "list_linked_test_2.h"

#include <stdio.h>

void list_linked_test_2(void)
{
  printf("---------------------------\n");
  printf("| LIST LINKED (2) ONE ELT |\n");
  printf("---------------------------\n");

  main_list_linked_one_elt_tests();
}

void main_list_linked_one_elt_tests(void)
{
  list_linked *ptr, *l1, *l2;
  int ret;

  //printf("#################\n");
  //printf("# ONE ELT TESTS #\n");
  //printf("#################\n");

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_list_linked(l1);
  printf("is_empty_list_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_list_linked(l1);
  printf("length_list_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Add 1337 1
  l2 = add_elt_list_linked(l1, 1337, 1);
  printf("add_elt_list_linked(l1, 1337, 1) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'add 1337 1' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Is empty
  ret = is_empty_list_linked(l2);
  printf("is_empty_list_linked(l2) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_list_linked(l2);
  printf("length_list_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 1337 : (see above)\n");
  // Search list
  ret = search_elt_list_linked(l2, 1337);
  printf("search_elt_list_linked(l2, 1337) [1] : %d\n", ret);
  test_output(ret, 1);
  // Get Elt list (1)
  ret = get_elt_list_linked(l2, 1);
  printf("get_elt_list_linked(l2, 1) [1337] : %d\n", ret);
  test_output(ret, 1337);
  // Del Elt 1
  ptr = del_elt_list_linked(l2, 1);
  printf("del_elt_list_linked(l2, 1) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) ptr, (void*) l2);
  test_diff_address(ptr, l2);

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_list_linked(l1);
  printf("is_empty_list_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_list_linked(l1);
  printf("length_list_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Add 42 1
  l2 = add_elt_list_linked(l1, 42, 1);
  printf("add_elt_list_linked(l1, 42, 1) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 1337' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Is empty
  ret = is_empty_list_linked(l2);
  printf("is_empty_list_linked(l2) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_list_linked(l2);
  printf("length_list_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 42 : (see above)\n");
  // Search list
  ret = search_elt_list_linked(l2, 42);
  printf("search_elt_list_linked(l2, 42) [1] : %d\n", ret);
  test_output(ret, 1);
  // Get Elt list (1)
  ret = get_elt_list_linked(l2, 1);
  printf("get_elt_list_linked(l2, 1) [42] : %d\n", ret);
  test_output(ret, 42);
  // Clear list
  ret = clear_list_linked(l2);
  printf("clear_list_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
