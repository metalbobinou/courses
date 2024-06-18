#include "stack_linked_test_2.h"

#include <stdio.h>

void stack_linked_test_2(void)
{
  printf("----------------------------\n");
  printf("| STACK LINKED (2) ONE ELT |\n");
  printf("----------------------------\n");

  main_stack_linked_one_elt_tests();
}

void main_stack_linked_one_elt_tests(void)
{
  list_linked *l1, *l2;
  //list_linked *ptr;
  int ret;

  //printf("##############\n");
  //printf("# NULL TESTS #\n");
  //printf("##############\n");

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) *nothing* : (see above)\n");

  // Push stack (42)
  l2 = push_stack_linked(l1, 42);
  printf("push_stack_linked(l1, 42) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 42' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [42] : %d\n", ret);
  test_output(ret, 42);

  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 42 : (see above)\n");

  // Pop stack
  l2 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [NULL] : %p\n", (void*) l2);
  test_equal_address(l2, NULL);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) *nothing* : (see above)\n");

  // Push stack (1337)
  l2 = push_stack_linked(l1, 1337);
  printf("push_stack_linked(l1, 1337) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 1337' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [1337] : %d\n", ret);
  test_output(ret, 1337);

  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 1337 : (see above)\n");

  // Clear stack
  ret = clear_stack_linked(l1);
  printf("clear_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
