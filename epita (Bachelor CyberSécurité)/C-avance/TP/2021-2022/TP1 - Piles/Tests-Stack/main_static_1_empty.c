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

  main_empty_stack_tests();

  return (0);
}

void main_empty_stack_tests(void)
{
  int ret;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  printf("Create (STATIC)\n");
  stack_static_create();

  printf("Delete (STATIC)\n");
  stack_static_delete();

  printf("Pushs & Clear (STATIC)\n");
  stack_static_push(5);
  stack_static_push(10);
  stack_static_push(15);
  stack_static_push(20);
  stack_static_clear();

  printf("Pushs & Pops (STATIC)\n");
  stack_static_push(8);
  stack_static_push(16);
  stack_static_push(32);
  stack_static_push(64);
  stack_static_pop();
  stack_static_pop();
  stack_static_pop();
  stack_static_pop();

  // Length 0
  ret = stack_static_length();
  printf("Length (STATIC) 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Max Length 0
  ret = stack_static_max_length();
  printf("Max Length (STATIC) 0 [%d] : %d\n", STACK_STATIC_MAX_LEN, ret);
  if (ret == STACK_STATIC_MAX_LEN)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Pop 0
  ret = stack_static_pop();
  printf("Pop (STATIC) 0 [-2] : %d\n", ret);
  if (ret == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head 0
  ret = stack_static_head();
  printf("Head (STATIC) 0 [-2] : %d\n", ret);
  if (ret == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Clear 0
  ret = stack_static_clear();
  printf("Clear (STATIC) 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Is Empty 0
  ret = stack_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Search 0
  ret = stack_static_search(5);
  printf("Search 5 (STATIC) 0 [-4] : %d\n", ret);
  if (ret == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Printf 0
  printf("Print empty (STATIC) :\n");
  stack_static_print();

  // Reverse 0
  stack_static_reverse();
  ret = stack_static_length();
  printf("Reverse + Length (STATIC) 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Clear
  ret = stack_static_clear();

  ret = stack_static_is_empty();
  printf("Clear + Is Empty (STATIC) 0 [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  printf("Delete (STATIC)\n");
  stack_static_delete();

  ret = stack_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
