#include "stack_linked_test_1.h"

#include <stdio.h>

void stack_linked_test_1(void)
{
  printf("--------------------------\n");
  printf("| STACK LINKED (1) EMPTY |\n");
  printf("--------------------------\n");

  main_stack_linked_null_tests();
}

void main_stack_linked_null_tests(void)
{
  list_linked *ptr;
  int ret;

  //printf("##############\n");
  //printf("# NULL TESTS #\n");
  //printf("##############\n");

  // Is empty
  ret = is_empty_stack_linked(NULL);
  printf("is_empty_stack_linked(NULL) [1] : %d\n", ret);
  test_output(ret, 1);

  // Length list
  ret = length_stack_linked(NULL);
  printf("length_stack_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);

  // Print list
  print_stack_linked(NULL);
  printf("print_stack_linked(NULL) *nothing* : (see above)\n");

  // Pop stack (1)
  ptr = pop_stack_linked(NULL);
  printf("pop_stack_linked(NULL) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Pop stack (2)
  ptr = pop_stack_linked(NULL);
  printf("pop_stack_linked(NULL) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Get Head stack
  ret = get_head_stack_linked(NULL);
  printf("get_head_stack_linked(NULL) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Clear stack
  ret = clear_stack_linked(NULL);
  printf("clear_stack_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);
}
