#include "queues.h"

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
  queue_ll *my_queue = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular ll
  my_queue = queue_ll_create();

  // Big Enqueue
  for (int i = 0; i < (4096 * 200); i++)
    queue_ll_enqueue(42, my_queue);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    queue_ll_dequeue(my_queue);

  // Length
  ret = queue_ll_length(my_queue);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Delete
  queue_ll_delete(my_queue);

  /********************************************/

  // Big ll
  my_queue = queue_ll_create();

  // Very Big Enqueue
  for (int i = 0; i < (4096 * 400); i++)
    queue_ll_enqueue(42, my_queue);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    queue_ll_dequeue(my_queue);

  // Length
  ret = queue_ll_length(my_queue);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  /********************************************/

  // Very Big Enqueue-Enqueue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_ll_enqueue(42, my_queue);
    queue_ll_enqueue(42, my_queue);
    queue_ll_dequeue(my_queue);
  }

  // Very Big Enqueue-Dequeue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_ll_enqueue(42, my_queue);
    queue_ll_dequeue(my_queue);
    queue_ll_dequeue(my_queue);
  }

  // Delete
  queue_ll_delete(my_queue);

  /********************************************/

  // ll
  my_queue = queue_ll_create();

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_ll_enqueue(42, my_queue);
    queue_ll_enqueue(42, my_queue);
    queue_ll_dequeue(my_queue);
  }

  queue_ll_clear(my_queue);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_ll_enqueue(64, my_queue);
    queue_ll_enqueue(42, my_queue);
    queue_ll_dequeue(my_queue);
  }

  // Head
  ret = queue_ll_head(my_queue);
  printf("Head [64] : %d\n", ret);
  test_output(ret, 64);

  /********************************************/

  // Reverse
  my_queue = queue_ll_reverse(my_queue);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 512; i++)
  {
    queue_ll_enqueue(18, my_queue);
    queue_ll_enqueue(12, my_queue);
    queue_ll_dequeue(my_queue);
  }

  // Big Dequeue
  for (int i = 0; i < 256; i++)
    queue_ll_dequeue(my_queue);

  // Delete
  queue_ll_delete(my_queue);

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
