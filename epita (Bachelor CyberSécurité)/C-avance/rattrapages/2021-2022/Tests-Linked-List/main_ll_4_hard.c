#include "linkedlist.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| QUEUE LINKED LIST |\n");
  printf("---------------------\n");

  main_hard_tests();

  return (0);
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_hard_tests(void)
{
  my_linkedlist *my_ll = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular ll
  my_ll = ll_create();

  // Big Enqueue
  for (int i = 0; i < (4096 * 200); i++)
    ll_insert(42, i, my_ll);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    ll_remove(i, my_ll);

  // Length
  ret = ll_length(my_ll);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Delete
  ll_delete(my_ll);

  /********************************************/

  // Big ll
  my_ll = ll_create();

  // Very Big Enqueue
  for (int i = 0; i < (4096 * 400); i++)
    ll_insert(42, i, my_ll);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    ll_remove(i, my_ll);

  // Length
  ret = ll_length(my_ll);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  /********************************************/

  // Very Big Enqueue-Enqueue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    ll_insert(42, i, my_ll);
    ll_insert(42, i + 1, my_ll);
    ll_remove(i, my_ll);
  }

  // Very Big Enqueue-Dequeue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    ll_insert(42, i, my_ll);
    ll_remove(i, my_ll);
    ll_remove(i + 1, my_ll);
  }

  // Delete
  ll_delete(my_ll);

  /********************************************/

  // ll
  my_ll = ll_create();

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    ll_insert(42, i, my_ll);
    ll_insert(42, i + 1, my_ll);
    ll_remove(i, my_ll);
  }

  ll_clear(my_ll);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    ll_insert(42, i, my_ll);
    ll_insert(42, i + 1, my_ll);
    ll_remove(i, my_ll);
  }

  // Head
  ret = ll_head(my_ll);
  printf("Head [64] : %d\n", ret);
  test_output(ret, 64);

  /********************************************/

  // Reverse
  my_ll = ll_reverse(my_ll);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 512; i++)
  {
    ll_insert(18, i, my_ll);
    ll_insert(12, i + 1, my_ll);
    ll_remove(i, my_ll);
  }

  // Big Dequeue
  for (int i = 0; i < 256; i++)
    ll_remove(i, my_ll);

  // Delete
  ll_delete(my_ll);

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
