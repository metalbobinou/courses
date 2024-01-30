#include "stacks.h"

#include "tests_static.h"

#include <stdio.h>

/* Redefine here */
/* #define STACK_STATIC_MAX_LEN 42 */

int main(void)
{
  printf("----------------\n");
  printf("| STACK STATIC |\n");
  printf("----------------\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  printf("Create (STATIC)\n");
  stack_static_create();

  printf("Pushs & Clear & Pushs (STATIC)\n");
  stack_static_push(5);
  stack_static_push(10);
  stack_static_push(15);
  stack_static_push(20);
  stack_static_clear();
  stack_static_push(5);
  stack_static_push(10);
  stack_static_push(15);
  stack_static_push(20);

  printf("Pushs & Pops & Pushs (STATIC)\n");
  stack_static_push(8);
  stack_static_push(16);
  stack_static_push(32);
  stack_static_push(64);
  stack_static_pop();
  stack_static_pop();
  stack_static_pop();
  stack_static_pop();
  stack_static_push(2);
  stack_static_push(4);
  stack_static_push(8);
  stack_static_push(16);

  // Length
  ret = stack_static_length();
  printf("Length (STATIC) 8 [8] : %d\n", ret);
  if (ret == 8)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Max Length
  ret = stack_static_max_length();
  printf("Max Length (STATIC) 8 [%d] : %d\n", STACK_STATIC_MAX_LEN, ret);
  if (ret == STACK_STATIC_MAX_LEN)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Pop
  ret = stack_static_pop();
  printf("Pop (STATIC) 7 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret = stack_static_length();
  printf("Length (STATIC) 7 [7] : %d\n", ret);
  if (ret == 7)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head
  ret = stack_static_head();
  printf("Head (STATIC) 7 [8] : %d\n", ret);
  if (ret == 8)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Is Empty
  ret = stack_static_is_empty();
  printf("Is Empty (STATIC) 7 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Search
  ret = stack_static_search(5);
  printf("Search 5 (STATIC) 7 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret = stack_static_search(8);
  printf("Search 8 (STATIC) 7 [6] : %d\n", ret);
  if (ret == 6)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret = stack_static_search(2);
  printf("Search 2 (STATIC) 7 [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret = stack_static_search(16);
  printf("Search 16 (STATIC) 7 [-4] : %d\n", ret);
  if (ret == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ret = stack_static_search(42);
  printf("Search 42 (STATIC) 7 [-4] : %d\n", ret);
  if (ret == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf
  printf("Print (STATIC) 7 [8 4 2 20 15 10 5] :\n");
  stack_static_print();

  // Reverse
  stack_static_reverse();
  ret = stack_static_length();
  printf("Reverse + Length (STATIC) 7 [7] : %d\n", ret);
  if (ret == 7)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf Reverse
  printf("Print Reverse (STATIC) 7 [5 10 15 20 2 4 8] :\n");
  stack_static_print();

  // Push reverse
  ret = stack_static_push(100);
  printf("Reverse + Push 100 (STATIC) 8 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Push reverse length
  ret = stack_static_length();
  printf("Reverse + Push + Length (STATIC) 8 [8] : %d\n", ret);
  if (ret == 8)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf Push reverse
  printf("Print Reverse (STATIC) 8 [100 5 10 15 20 2 4 8] :\n");
  stack_static_print();

  // Clear
  ret = stack_static_clear();
  printf("Clear (STATIC) 0 [8] : %d\n", ret);
  if (ret == 8)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  ret = stack_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  printf("Pushs & Delete (STATIC)\n");
  stack_static_push(5);
  stack_static_push(42);
  stack_static_push(100);
  stack_static_delete();

  ret = stack_static_is_empty();
  printf("Is Empty (STATIC) 0 : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
