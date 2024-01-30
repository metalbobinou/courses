#include "stacks.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| STACK LINKED LIST |\n");
  printf("---------------------\n");

  main_hard_tests();

  return (0);
}

void main_hard_tests(void)
{
  stack_ll *my_stack = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular ll
  my_stack = stack_ll_create();

  // Big Push
  for (int i = 0; i < (4096 * 200); i++)
    stack_ll_push(42, my_stack);

  // Very Big Pop
    for (int i = 0; i < (4096 * 400); i++)
    stack_ll_pop(my_stack);

  // Length
  ret = stack_ll_length(my_stack);
  printf("Length 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  stack_ll_delete(my_stack);

  /********************************************/

  // Big ll
  my_stack = stack_ll_create();

  // Very Big Push
  for (int i = 0; i < (4096 * 400); i++)
    stack_ll_push(42, my_stack);

  // Very Big Pop
    for (int i = 0; i < (4096 * 400); i++)
    stack_ll_pop(my_stack);

  // Length
  ret = stack_ll_length(my_stack);
  printf("Length 0 [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  /********************************************/

  // Very Big Push-Push-Pop
  for (int i = 0; i < (4096 * 400); i++)
  {
    stack_ll_push(42, my_stack);
    stack_ll_push(42, my_stack);
    stack_ll_pop(my_stack);
  }

  // Very Big Push-Pop-Pop
  for (int i = 0; i < (4096 * 400); i++)
  {
    stack_ll_push(42, my_stack);
    stack_ll_pop(my_stack);
    stack_ll_pop(my_stack);
  }

  // Delete
  stack_ll_delete(my_stack);

  /********************************************/

  // ll
  my_stack = stack_ll_create();

  // Push-Push-Pop
  for (int i = 0; i < 32; i++)
  {
    stack_ll_push(42, my_stack);
    stack_ll_push(42, my_stack);
    stack_ll_pop(my_stack);
  }

  stack_ll_clear(my_stack);

  // Push-Push-Pop
  for (int i = 0; i < 32; i++)
  {
    stack_ll_push(64, my_stack);
    stack_ll_push(42, my_stack);
    stack_ll_pop(my_stack);
  }

  // Head
  ret = stack_ll_head(my_stack);
  printf("Head [64] : %d\n", ret);
  if (ret == 64)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  /********************************************/

  // Reverse
  my_stack = stack_ll_reverse(my_stack);

  // Push-Push-Pop
  for (int i = 0; i < 512; i++)
  {
    stack_ll_push(18, my_stack);
    stack_ll_push(12, my_stack);
    stack_ll_pop(my_stack);
  }

  // Big Pop
  for (int i = 0; i < 256; i++)
    stack_ll_pop(my_stack);

  // Delete
  stack_ll_delete(my_stack);

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
