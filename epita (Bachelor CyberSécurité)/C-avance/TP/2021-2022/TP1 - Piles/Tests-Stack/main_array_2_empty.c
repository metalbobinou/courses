#include "stacks.h"

#include "tests_array.h"

#include <stdio.h>

int main(void)
{
  printf("---------------\n");
  printf("| STACK ARRAY |\n");
  printf("---------------\n");

  main_empty_stack_tests();

  return (0);
}

void main_empty_stack_tests(void)
{
  stack_array *my_empty_stack = NULL;
  stack_array *my_stack1 = NULL;
  stack_array *my_stack2 = NULL;
  // stack_array *ptr = NULL;
  int ret1, ret2, ret_empty;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  printf("Create 6 (1)\n");
  my_stack1 = stack_array_create(6);
  printf("Create 6 (2)\n");
  my_stack2 = stack_array_create(6);
  printf("Create 42 (empty)\n");
  my_empty_stack = stack_array_create(42);

  printf("Pushs & Clear (1)\n");
  stack_array_push(5, my_stack1);
  stack_array_push(10, my_stack1);
  stack_array_push(15, my_stack1);
  stack_array_push(20, my_stack1);
  stack_array_clear(my_stack1);

  printf("Pushs & Pops (2)\n");
  stack_array_push(8, my_stack2);
  stack_array_push(16, my_stack2);
  stack_array_push(32, my_stack2);
  stack_array_push(64, my_stack2);
  stack_array_pop(my_stack2);
  stack_array_pop(my_stack2);
  stack_array_pop(my_stack2);
  stack_array_pop(my_stack2);

  // Length 0
  ret1 = stack_array_length(my_stack1);
  printf("Length (1) [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_length(my_stack2);
  printf("Length (2) [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_length(my_empty_stack);
  printf("Length (empty) [0] : %d\n", ret_empty);
  if (ret_empty == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Max Length 0
  ret1 = stack_array_max_length(my_stack1);
  printf("Max Length (1) [6] : %d\n", ret1);
  if (ret1 == 6)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_max_length(my_stack2);
  printf("Max Length (2) [6] : %d\n", ret2);
  if (ret2 == 6)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_max_length(my_empty_stack);
  printf("Max Length (empty) [42] : %d\n", ret_empty);
  if (ret_empty == 42)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Pop 0
  ret1 = stack_array_pop(my_stack1);
  printf("Pop (1) [-2] : %d\n", ret1);
  if (ret1 == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_pop(my_stack2);
  printf("Pop (2) [-2] : %d\n", ret2);
  if (ret2 == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_pop(my_empty_stack);
  printf("Pop (empty) [-2] : %d\n", ret_empty);
  if (ret_empty == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head 0
  ret1 = stack_array_head(my_stack1);
  printf("Head (1) [-2] : %d\n", ret1);
  if (ret1 == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_head(my_stack2);
  printf("Head (2) [-2] : %d\n", ret2);
  if (ret2 == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_head(my_empty_stack);
  printf("Head (empty) [-2] : %d\n", ret_empty);
  if (ret_empty == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Clear 0
  ret1 = stack_array_clear(my_stack1);
  printf("Clear (1) [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_clear(my_stack2);
  printf("Clear (2) [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_clear(my_empty_stack);
  printf("Clear (empty) [0] : %d\n", ret_empty);
  if (ret_empty == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Is Empty 0
  ret1 = stack_array_is_empty(my_stack1);
  printf("Is Empty (1) [1] : %d\n", ret1);
  if (ret1 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_is_empty(my_stack2);
  printf("Is Empty (2) [1] : %d\n", ret2);
  if (ret2 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_is_empty(my_empty_stack);
  printf("Is Empty (empty) [1] : %d\n", ret_empty);
  if (ret_empty == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Search 0
  ret1 = stack_array_search(5, my_stack1);
  printf("Search 5 (1) [-4] : %d\n", ret1);
  if (ret1 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_search(8, my_stack2);
  printf("Search 8 (2) [-4] : %d\n", ret2);
  if (ret2 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_search(42, my_empty_stack);
  printf("Search 42 (empty) [-4] : %d\n", ret_empty);
  if (ret_empty == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf 0
  printf("Print empty (1) :\n");
  stack_array_print(my_stack1);
  printf("Print empty (2) :\n");
  stack_array_print(my_stack2);
  printf("Print empty (empty) :\n");
  stack_array_print(my_empty_stack);

  // Reverse 0
  my_stack1 = stack_array_reverse(my_stack1);
  ret1 = stack_array_length(my_stack1);
  printf("Reverse + Length (1) [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  my_stack2 = stack_array_reverse(my_stack2);
  ret2 = stack_array_length(my_stack2);
  printf("Reverse + Length (2) [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  my_empty_stack = stack_array_reverse(my_empty_stack);
  ret_empty = stack_array_length(my_empty_stack);
  printf("Reverse + Length (empty) [0] : %d\n", ret_empty);
  if (ret_empty == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Clear
  stack_array_clear(my_stack1);
  stack_array_clear(my_stack2);
  stack_array_clear(my_empty_stack);

  ret1 = stack_array_is_empty(my_stack1);
  printf("Clear + Is Empty (1) [1] : %d\n", ret1);
  if (ret1 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_array_is_empty(my_stack2);
  printf("Clear + Is Empty (2) [1] : %d\n", ret2);
  if (ret2 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret_empty = stack_array_is_empty(my_empty_stack);
  printf("Clear + Is Empty (empty) [1] : %d\n", ret_empty);
  if (ret_empty == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  printf("Delete (1)\n");
  stack_array_delete(my_stack1);
  printf("Delete (2)\n");
  stack_array_delete(my_stack2);
  printf("Delete (empty)\n");
  stack_array_delete(my_empty_stack);

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
