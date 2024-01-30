#include "stacks.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| STACK LINKED LIST |\n");
  printf("---------------------\n");

  main_null_tests();

  return (0);
}

void main_null_tests(void)
{
  //stack_ll *my_stack = NULL;
  stack_ll *ptr = NULL;
  int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Length NULL
  ret = stack_ll_length(NULL);
  printf("Length NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Is Empty NULL
  ret = stack_ll_is_empty(NULL);
  printf("Is empty NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Push 42 NULL
  ret = stack_ll_push(42, NULL);
  printf("Push 42 NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Pop NULL
  ret = stack_ll_pop(NULL);
  printf("Pop NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head NULL
  ret = stack_ll_head(NULL);
  printf("Head NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Clear NULL
  ret = stack_ll_clear(NULL);
  printf("Clear NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Search 42 NULL
  ret = stack_ll_search(42, NULL);
  printf("Search 42 NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Reverse NULL
  ptr = stack_ll_reverse(NULL);
  printf("Reverse NULL [0] : %p\n", (void *) ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  printf("Print NULL :\n");
  stack_ll_print(NULL);

  printf("##################\n");
  printf("# END NULL TESTS #\n");
  printf("##################\n");
}
