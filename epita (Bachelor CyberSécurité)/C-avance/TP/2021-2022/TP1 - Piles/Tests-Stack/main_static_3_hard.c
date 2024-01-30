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

  main_hard_tests();

  return (0);
}

void main_hard_tests(void)
{
  //stack_static *my_stack = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular static
  stack_static_create();

  // Big Push
  for (int i = 0; i < (4096 * 200); i++)
    stack_static_push(42);

  // Very Big Pop
    for (int i = 0; i < (4096 * 400); i++)
    stack_static_pop();

  // Length
  ret = stack_static_length();
  printf("Length 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  stack_static_delete();

  /********************************************/

  // Big static
  stack_static_create();

  // Very Big Push
  for (int i = 0; i < (4096 * 400); i++)
    stack_static_push(42);

  // Very Big Pop
    for (int i = 0; i < (4096 * 400); i++)
    stack_static_pop();

  // Length
  ret = stack_static_length();
  printf("Length 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  /********************************************/

  // Very Big Push-Push-Pop
  for (int i = 0; i < (4096 * 400); i++)
  {
    stack_static_push(42);
    stack_static_push(42);
    stack_static_pop();
  }

  // Very Big Push-Pop-Pop
  for (int i = 0; i < (4096 * 400); i++)
  {
    stack_static_push(42);
    stack_static_pop();
    stack_static_pop();
  }

  // Delete
  stack_static_delete();

  /********************************************/

  // static
  stack_static_create();

  // Push-Push-Pop
  for (int i = 0; i < 32; i++)
  {
    stack_static_push(42);
    stack_static_push(42);
    stack_static_pop();
  }

  stack_static_clear();

  // Push-Push-Pop
  for (int i = 0; i < 32; i++)
  {
    stack_static_push(64);
    stack_static_push(42);
    stack_static_pop();
  }

  // Head
  ret = stack_static_head();
  printf("Head [64] : %d\n", ret);
  if (ret == 64)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  /********************************************/

  // Reverse
  stack_static_reverse();

  // Push-Push-Pop
  for (int i = 0; i < 512; i++)
  {
    stack_static_push(18);
    stack_static_push(12);
    stack_static_pop();
  }

  // Big Pop
  for (int i = 0; i < 256; i++)
    stack_static_pop();

  // Delete
  stack_static_delete();

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
