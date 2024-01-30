#include "queues.h"

#include "tests_static.h"

#include <stdio.h>

/* Redefine here */
/* #define QUEUE_STATIC_MAX_LEN 42 */

int main(void)
{
  printf("----------------\n");
  printf("| QUEUE STATIC |\n");
  printf("----------------\n");

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
  //queue_static *my_queue = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular static
  queue_static_create();

  // Big Enqueue
  for (int i = 0; i < (4096 * 200); i++)
    queue_static_enqueue(42);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    queue_static_dequeue();

  // Length
  ret = queue_static_length();
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Delete
  queue_static_delete();

  /********************************************/

  // Big static
  queue_static_create();

  // Very Big Enqueue
  for (int i = 0; i < (4096 * 400); i++)
    queue_static_enqueue(42);

  // Very Big Dequeue
    for (int i = 0; i < (4096 * 400); i++)
    queue_static_dequeue();

  // Length
  ret = queue_static_length();
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  /********************************************/

  // Very Big Enqueue-Enqueue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_static_enqueue(42);
    queue_static_enqueue(42);
    queue_static_dequeue();
  }

  // Very Big Enqueue-Dequeue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_static_enqueue(42);
    queue_static_dequeue();
    queue_static_dequeue();
  }

  // Delete
  queue_static_delete();

  /********************************************/

  // static
  queue_static_create();

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_static_enqueue(42);
    queue_static_enqueue(42);
    queue_static_dequeue();
  }

  queue_static_clear();

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_static_enqueue(64);
    queue_static_enqueue(42);
    queue_static_dequeue();
  }

  // Head
  ret = queue_static_head();
  printf("Head [64] : %d\n", ret);
  test_output(ret, 64);

  // Tail
  ret = queue_static_tail();
  printf("Tail [42] : %d\n", ret);
  test_output(ret, 42);

  /********************************************/

  // Reverse
  queue_static_reverse();

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 512; i++)
  {
    queue_static_enqueue(18);
    queue_static_enqueue(12);
    queue_static_dequeue();
  }

  // Big Dequeue
  for (int i = 0; i < 256; i++)
    queue_static_dequeue();

  // Delete
  queue_static_delete();

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
