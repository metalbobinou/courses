#include "stacks.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| STACK LINKED LIST |\n");
  printf("---------------------\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  stack_ll *my_stack1 = NULL;
  stack_ll *my_stack2 = NULL;
  // stack_ll *ptr = NULL;
  int ret1, ret2;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  printf("Create (1)\n");
  my_stack1 = stack_ll_create();
  printf("Create (2)\n");
  my_stack2 = stack_ll_create();

  printf("Pushs & Clear & Pushs (1)\n");
  stack_ll_push(5, my_stack1);
  stack_ll_push(10, my_stack1);
  stack_ll_push(15, my_stack1);
  stack_ll_push(20, my_stack1);
  stack_ll_clear(my_stack1);
  stack_ll_push(5, my_stack1);
  stack_ll_push(10, my_stack1);
  stack_ll_push(15, my_stack1);
  stack_ll_push(20, my_stack1);

  printf("Pushs & Pops & Pushs (2)\n");
  stack_ll_push(8, my_stack2);
  stack_ll_push(16, my_stack2);
  stack_ll_push(32, my_stack2);
  stack_ll_push(64, my_stack2);
  stack_ll_pop(my_stack2);
  stack_ll_pop(my_stack2);
  stack_ll_pop(my_stack2);
  stack_ll_pop(my_stack2);
  stack_ll_push(2, my_stack2);
  stack_ll_push(4, my_stack2);
  stack_ll_push(8, my_stack2);
  stack_ll_push(16, my_stack2);

  // Length
  ret1 = stack_ll_length(my_stack1);
  printf("Length (1) 4 [4] : %d\n", ret1);
  if (ret1 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_length(my_stack2);
  printf("Length (2) 4 [4] : %d\n", ret2);
  if (ret2 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Pop
  ret1 = stack_ll_pop(my_stack1);
  printf("Pop (1) 3 [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret1 = stack_ll_length(my_stack1);
  printf("Pop + Length (1) 3 [3] : %d\n", ret1);
  if (ret1 == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_pop(my_stack2);
  printf("Pop (2) 3 [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_length(my_stack2);
  printf("Pop + Length (2) 3 [3] : %d\n", ret2);
  if (ret1 == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head
  ret1 = stack_ll_head(my_stack1);
  printf("Head (1) 3 [15] : %d\n", ret1);
  if (ret1 == 15)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_head(my_stack2);
  printf("Head (2) 3 [8] : %d\n", ret2);
  if (ret2 == 8)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Is Empty
  ret1 = stack_ll_is_empty(my_stack1);
  printf("Is Empty (1) 3 [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_is_empty(my_stack2);
  printf("Is Empty (2) 3 [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Search
  ret1 = stack_ll_search(5, my_stack1);
  printf("Search 5 (1) 3 [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret1 = stack_ll_search(15, my_stack1);
  printf("Search 15 (1) 3 [2] : %d\n", ret1);
  if (ret1 == 2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret1 = stack_ll_search(20, my_stack1);
  printf("Search 20 (1) 3 [-4] : %d\n", ret1);
  if (ret1 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret1 = stack_ll_search(42, my_stack1);
  printf("Search 42 (1) 3 [-4] : %d\n", ret1);
  if (ret1 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_search(2, my_stack2);
  printf("Search 2 (2) 3 [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_search(8, my_stack2);
  printf("Search 8 (2) 3 [2] : %d\n", ret2);
  if (ret2 == 2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_search(16, my_stack2);
  printf("Search 16 (2) 3 [-4] : %d\n", ret2);
  if (ret2 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_search(42, my_stack2);
  printf("Search 42 (2) 3 [-4] : %d\n", ret2);
  if (ret2 == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf
  printf("Print (1) 3 [15 10 5] :\n");
  stack_ll_print(my_stack1);
  printf("Print (2) 3 [8 4 2] :\n");
  stack_ll_print(my_stack2);

  // Reverse
  my_stack1 = stack_ll_reverse(my_stack1);
  ret1 = stack_ll_length(my_stack1);
  printf("Reverse + Length (1) 3 [3] : %d\n", ret1);
  if (ret1 == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  my_stack2 = stack_ll_reverse(my_stack2);
  ret2 = stack_ll_length(my_stack2);
  printf("Reverse + Length (2) 3 [3] : %d\n", ret2);
  if (ret2 == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf Reverse
  printf("Print Reverse (1) 3 [5 10 15] :\n");
  stack_ll_print(my_stack1);
  printf("Print Reverse (2) 3 [2 4 8] :\n");
  stack_ll_print(my_stack2);

  // Push reverse
  ret1 = stack_ll_push(100, my_stack1);
  printf("Reverse + Push 100 (1) 4 [0] : %d\n", ret1);
  if (ret1 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_push(200, my_stack2);
  printf("Reverse + Push 200 (2) 4 [0] : %d\n", ret2);
  if (ret2 == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Push reverse length
  ret1 = stack_ll_length(my_stack1);
  printf("Reverse + Push 100 + Length (1) 4 [4] : %d\n", ret1);
  if (ret1 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_length(my_stack2);
  printf("Reverse + Push 200 + Length (2) 4 [4] : %d\n", ret2);
  if (ret2 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf Push reverse
  printf("Print Reverse (1) 4 [100 5 10 15] :\n");
  stack_ll_print(my_stack1);
  printf("Print Reverse (2) 4 [200 2 4 8] :\n");
  stack_ll_print(my_stack2);

  // Clear
  ret1 = stack_ll_clear(my_stack1);
  printf("Clear (1) 0 [4] : %d\n", ret1);
  if (ret1 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_clear(my_stack2);
  printf("Clear (2) 0 [4] : %d\n", ret2);
  if (ret2 == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  ret1 = stack_ll_is_empty(my_stack1);
  printf("Is Empty (1) 0 [1] : %d\n", ret1);
  if (ret1 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret2 = stack_ll_is_empty(my_stack2);
  printf("Is Empty (2) 0 [1] : %d\n", ret2);
  if (ret2 == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  printf("Pushs & Delete (1)\n");
  stack_ll_push(5, my_stack1);
  stack_ll_push(42, my_stack1);
  stack_ll_push(100, my_stack1);
  stack_ll_delete(my_stack1);
  printf("Delete (2)\n");
  stack_ll_delete(my_stack2);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
