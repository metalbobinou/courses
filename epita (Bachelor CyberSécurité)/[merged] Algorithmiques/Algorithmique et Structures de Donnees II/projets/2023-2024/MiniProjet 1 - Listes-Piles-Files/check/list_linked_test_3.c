#include "list_linked_test_3.h"

#include <stdio.h>

void list_linked_test_3(void)
{
  printf("---------------------------\n");
  printf("| LIST LINKED (3) REGULAR |\n");
  printf("---------------------------\n");

  main_list_linked_regular_tests();
}

void main_list_linked_regular_tests(void)
{
  list_linked *l1, *l2;
  //list_linked *ptr;
  int ret;

  //printf("#################\n");
  //printf("# REGULAR TESTS #\n");
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

  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) *nothing* : (see above)\n");
  // Add 64 1
  l1 = add_elt_list_linked(l1, 64, 1);
  printf("add_elt_list_linked(l1, 64, 1) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) 64 : (see above)\n");

  // Add 97 1
  l2 = add_elt_list_linked(l1, 97, 1);
  printf("add_elt_list_linked(l1, 97, 1) [???] : %p\n", (void*) l1);
  // Head changed
  printf("test if head changed since 'add 97 1' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) 97 64 : (see above)\n");

  // Add 36 3
  l2 = add_elt_list_linked(l1, 36, 3);
  printf("add_elt_list_linked(l1, 36, 3) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 97 64 36 : (see above)\n");

  // Add 58 4
  l2 = add_elt_list_linked(l1, 58, 4);
  printf("add_elt_list_linked(l1, 58, 4) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 97 64 36 58 : (see above)\n");

  // Add 4 3
  l2 = add_elt_list_linked(l1, 4, 3);
  printf("add_elt_list_linked(l1, 4, 3) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 97 64 4 36 58 : (see above)\n");

  // Add 2 5
  l2 = add_elt_list_linked(l1, 2, 5);
  printf("add_elt_list_linked(l1, 2, 5) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 97 64 4 36 2 58 : (see above)\n");

  // Head is same
  printf("test if head didn't changed since 'add 42 1' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  // Is empty
  ret = is_empty_list_linked(l1);
  printf("is_empty_list_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_list_linked(l1);
  printf("length_list_linked(l1) [6] : %d\n", ret);
  test_output(ret, 6);
  // Search list
  ret = search_elt_list_linked(l1, 42);
  printf("search_elt_list_linked(l1, 42) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Get Elt list (10)
  ret = get_elt_list_linked(l1, 10);
  printf("get_elt_list_linked(l1, 10) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) 97 64 4 36 2 58 : (see above)\n");
  // Search list
  ret = search_elt_list_linked(l1, 97);
  printf("search_elt_list_linked(l1, 97) [1] : %d\n", ret);
  test_output(ret, 1);
  // Get Elt list (1)
  ret = get_elt_list_linked(l1, 1);
  printf("get_elt_list_linked(l1, 1) [97] : %d\n", ret);
  test_output(ret, 97);
  // Search list
  ret = search_elt_list_linked(l1, 58);
  printf("search_elt_list_linked(l1, 58) [6] : %d\n", ret);
  test_output(ret, 6);
  // Get Elt list (6)
  ret = get_elt_list_linked(l1, 6);
  printf("get_elt_list_linked(l1, 6) [58] : %d\n", ret);
  test_output(ret, 58);
  // Search list
  ret = search_elt_list_linked(l1, 36);
  printf("search_elt_list_linked(l1, 36) [4] : %d\n", ret);
  test_output(ret, 4);
  // Get Elt list (4)
  ret = get_elt_list_linked(l1, 4);
  printf("get_elt_list_linked(l1, 4) [36] : %d\n", ret);
  test_output(ret, 36);


  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) 97 64 4 36 2 58 : (see above)\n");

  // Add 42 5
  l1 = add_elt_list_linked(l1, 42, 5);
  printf("add_elt_list_linked(l1, 42, 5) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 4 36 42 2 58 : (see above)\n");

  // Del 3
  l1 = del_elt_list_linked(l1, 3);
  printf("del_elt_list_linked(l1, 3) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 36 42 2 58 : (see above)\n");

  // Del 5
  l1 = del_elt_list_linked(l1, 5);
  printf("del_elt_list_linked(l1, 5) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 36 42 58 : (see above)\n");

  // Del 5
  l1 = del_elt_list_linked(l1, 5);
  printf("del_elt_list_linked(l1, 5) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 36 42 : (see above)\n");

  // Add 37 5
  l1 = add_elt_list_linked(l1, 37, 5);
  printf("add_elt_list_linked(l1, 37, 5) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 36 42 37 : (see above)\n");

  // Add 59 4
  l1 = add_elt_list_linked(l1, 59, 4);
  printf("add_elt_list_linked(l1, 59, 4) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 97 64 36 59 42 37 : (see above)\n");

  // Del 1
  l2 = del_elt_list_linked(l1, 1);
  printf("del_elt_list_linked(l1, 1) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 64 36 59 42 37 : (see above)\n");
  // Head changed
  printf("test if head changed since 'del 1' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Add 15 2
  l1 = add_elt_list_linked(l1, 15, 2);
  printf("add_elt_list_linked(l1, 15, 2) [???] : %p\n", (void*) l1);
  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l2) 64 15 36 59 42 37 : (see above)\n");

  // Del 1
  l2 = del_elt_list_linked(l1, 1);
  printf("del_elt_list_linked(l1, 1) [???] : %p\n", (void*) l2);
  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 15 36 59 42 37 : (see above)\n");
  // Head changed
  printf("test if head changed since 'del 1' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  l1 = l2;

  // Test for the state of the list : 15 36 59 42 37
  // Search list
  ret = search_elt_list_linked(l1, 15);
  printf("search_elt_list_linked(l1, 15) [1] : %d\n", ret);
  test_output(ret, 1);
  // Get Elt list (1)
  ret = get_elt_list_linked(l1, 1);
  printf("get_elt_list_linked(l1, 1) [15] : %d\n", ret);
  test_output(ret, 15);
  // Search list
  ret = search_elt_list_linked(l1, 36);
  printf("search_elt_list_linked(l1, 36) [2] : %d\n", ret);
  test_output(ret, 2);
  // Get Elt list (2)
  ret = get_elt_list_linked(l1, 2);
  printf("get_elt_list_linked(l1, 2) [36] : %d\n", ret);
  test_output(ret, 36);
  // Search list
  ret = search_elt_list_linked(l1, 59);
  printf("search_elt_list_linked(l1, 59) [3] : %d\n", ret);
  test_output(ret, 3);
  // Get Elt list (3)
  ret = get_elt_list_linked(l1, 3);
  printf("get_elt_list_linked(l1, 3) [59] : %d\n", ret);
  test_output(ret, 59);
  // Search list
  ret = search_elt_list_linked(l1, 42);
  printf("search_elt_list_linked(l1, 42) [4] : %d\n", ret);
  test_output(ret, 4);
  // Get Elt list (4)
  ret = get_elt_list_linked(l1, 4);
  printf("get_elt_list_linked(l1, 4) [42] : %d\n", ret);
  test_output(ret, 42);
  // Search list
  ret = search_elt_list_linked(l1, 37);
  printf("search_elt_list_linked(l1, 37) [5] : %d\n", ret);
  test_output(ret, 5);
  // Get Elt list (5)
  ret = get_elt_list_linked(l1, 5);
  printf("get_elt_list_linked(l1, 5) [37] : %d\n", ret);
  test_output(ret, 37);
  // Search list (old number)
  ret = search_elt_list_linked(l1, 4);
  printf("search_elt_list_linked(l1, 4) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Get Elt list (6)
  ret = get_elt_list_linked(l1, 6);
  printf("get_elt_list_linked(l1, 6) [-2] : %d\n", ret);
  test_output(ret, -2);

  // Clear list
  ret = clear_list_linked(l1);
  printf("clear_list_linked(l1) [5] : %d\n", ret);
  test_output(ret, 5);

  l1 = NULL;
  l2 = NULL;
}
