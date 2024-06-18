#include "stack_linked_test_4.h"

#include <stdio.h>

void stack_linked_test_4(void)
{
  printf("-------------------------\n");
  printf("| STACK LINKED (4) LONG |\n");
  printf("-------------------------\n");

  main_stack_linked_long_tests();
}

void main_stack_linked_long_tests(void)
{
  list_linked *l1, *l2;
  int ret;

  //printf("##############\n");
  //printf("# LONG TESTS #\n");
  //printf("##############\n");

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_list_linked(l1);
  printf("is_empty_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Is empty
  ret = is_empty_list_linked(l2);
  printf("is_empty_stack_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  for (int i = 0; i < 4000; i++)
    l1 = push_stack_linked(l1, 42);
  for (int i = 0; i < 4000; i++)
    l2 = push_stack_linked(l2, 1);

  for (int i = 0; i < 2000; i++)
    l1 = pop_stack_linked(l1);
  for (int i = 0; i < 2000; i++)
    l2 = pop_stack_linked(l2);

  for (int i = 0; i < 1000; i++)
    l1 = push_stack_linked(l1, 1337);
  for (int i = 0; i < 1000; i++)
    l2 = push_stack_linked(l2, 2);

  for (int i = 0; i < 2999; i++)
    l1 = pop_stack_linked(l1);
  for (int i = 0; i < 2999; i++)
    l2 = pop_stack_linked(l2);

  // Print stack
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 42 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [42] : %d\n", ret);
  test_output(ret, 42);

  // Print stack
  print_stack_linked(l2);
  printf("print_stack_linked(l2) 1 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l2);
  printf("get_head_stack_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  // Clear stack
  ret = clear_stack_linked(l1);
  printf("clear_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  ret = clear_stack_linked(l2);
  printf("clear_stack_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
