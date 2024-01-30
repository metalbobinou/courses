#include "queues.h"

#include "tests_array.h"

#include <stdio.h>

int main(void)
{
  printf("---------------\n");
  printf("| QUEUE ARRAY |\n");
  printf("---------------\n");

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
  queue_array *my_queue = NULL;
  int ret;

  printf("##############\n");
  printf("# HARD TESTS #\n");
  printf("##############\n");

  // Regular array
  my_queue = queue_array_create(6);

  // Big Enqueue
  for (int i = 0; i < (4096 * 200); i++)
    queue_array_enqueue(42, my_queue);

  // Big Insert
  for (int i = (-1024); i < (4096 * 300); i++)
    queue_array_insert(1337, i, my_queue);

  // Very Big Dequeue
  for (int i = 0; i < (4096 * 2048); i++)
    queue_array_dequeue(my_queue);

  // Length
  ret = queue_array_length(my_queue);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Delete
  queue_array_delete(my_queue);

  /********************************************/

  // Big array
  my_queue = queue_array_create(4096 * 200);

  // Very Big Enqueue
  for (int i = 0; i < (4096 * 400); i++)
    queue_array_enqueue(42, my_queue);

  // Very Big Dequeue
  for (int i = 0; i < (4096 * 400); i++)
    queue_array_dequeue(my_queue);

  // Length
  ret = queue_array_length(my_queue);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  /********************************************/

  // Very Big Enqueue-Enqueue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_array_enqueue(42, my_queue);
    queue_array_enqueue(42, my_queue);
    queue_array_dequeue(my_queue);
  }

  // Very Big Enqueue-Dequeue-Dequeue
  for (int i = 0; i < (4096 * 400); i++)
  {
    queue_array_enqueue(42, my_queue);
    queue_array_dequeue(my_queue);
    queue_array_dequeue(my_queue);
  }

  // Big insert
  for (int i = (-1024); i < (4096 * 300); i++)
    queue_array_insert(1337, i, my_queue);

  // Big replace
  for (int i = (-1024); i < (4096 * 300); i++)
    queue_array_replace(666, i, my_queue);

  // Big re-enqueue
  for (int i = 0; i < (4096 * 400); i++)
    queue_array_enqueue(1664, my_queue);

  // Delete
  queue_array_delete(my_queue);

  /********************************************/

  // Big array
  my_queue = queue_array_create(4096 * 200);

  // Very Big Enqueue
  for (int i = 0; i < (4096 * 400); i++)
    queue_array_enqueue(42, my_queue);

  // Insert
  queue_array_insert(343, 0, my_queue);
  queue_array_insert(1337, 0, my_queue);

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [42] : %d\n", ret);
  test_output(ret, 42);

  // Tail
  ret = queue_array_tail(my_queue);
  printf("Tail [42] : %d\n", ret);
  test_output(ret, 42);

  // Replace
  queue_array_replace(343, 0, my_queue);
  queue_array_replace(1664, 0, my_queue);

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [1664] : %d\n", ret);
  test_output(ret, 1664);

  // Tail
  ret = queue_array_tail(my_queue);
  printf("Tail [42] : %d\n", ret);
  test_output(ret, 42);

  for (int i = 0; i < 6; i++)
    queue_array_dequeue(my_queue);

  // Insert-Insert-Replace-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_array_insert(343, i + 1, my_queue);
    queue_array_insert(666, i + 1, my_queue);
    queue_array_replace(1337, i, my_queue);
  }

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [1337] : %d\n", ret);
  test_output(ret, 1337);

  // Tail
  ret = queue_array_tail(my_queue);
  printf("Tail [42] : %d\n", ret);
  test_output(ret, 42);

  for (int i = 0; i < 65; i++)
    queue_array_dequeue(my_queue);

  // Insert-Insert-Replace-Dequeue negative
  for (int i = 0; i < 32; i++)
  {
    queue_array_insert(343, -1, my_queue);
    queue_array_insert(666, -42, my_queue);
    queue_array_replace(1664, -1, my_queue);
    queue_array_dequeue(my_queue);
  }

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [343] : %d\n", ret);
  test_output(ret, 343);

  // Tail
  ret = queue_array_tail(my_queue);
  printf("Tail [42] : %d\n", ret);
  test_output(ret, 42);

  // Very Big Dequeue
  for (int i = 0; i < (4096 * 400); i++)
    queue_array_dequeue(my_queue);

  // Length
  ret = queue_array_length(my_queue);
  printf("Length 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Delete
  queue_array_delete(my_queue);

  /********************************************/

  // Array
  my_queue = queue_array_create(128);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_array_enqueue(42, my_queue);
    queue_array_enqueue(42, my_queue);
    queue_array_dequeue(my_queue);
  }

  queue_array_clear(my_queue);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_array_enqueue(64, my_queue);
    queue_array_enqueue(42, my_queue);
    queue_array_dequeue(my_queue);
  }

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [64] : %d\n", ret);
  test_output(ret, 64);

  /********************************************/

  // Reverse
  my_queue = queue_array_reverse(my_queue);

  // Enqueue-Enqueue-Dequeue
  for (int i = 0; i < 512; i++)
  {
    queue_array_enqueue(18, my_queue);
    queue_array_enqueue(12, my_queue);
    queue_array_dequeue(my_queue);
  }

  // Big Dequeue
  for (int i = 0; i < 256; i++)
    queue_array_dequeue(my_queue);

  // Delete
  queue_array_delete(my_queue);

  /********************************************/

  // Array
  my_queue = queue_array_create(128);

  // Insert-Insert-Replace-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_array_insert(342, i + 1, my_queue);
    queue_array_insert(665, i + 1, my_queue);
    queue_array_replace(1336, i, my_queue);
    queue_array_dequeue(my_queue);
  }

  queue_array_clear(my_queue);

  // Insert-Insert-Replace-Dequeue
  for (int i = 0; i < 32; i++)
  {
    queue_array_insert(343, i + 1, my_queue);
    queue_array_insert(666, i + 1, my_queue);
    queue_array_replace(1337, i, my_queue);
    queue_array_dequeue(my_queue);
  }

  // Head
  ret = queue_array_head(my_queue);
  printf("Head [1337] : %d\n", ret);
  test_output(ret, 1337);

  // Tail
  ret = queue_array_tail(my_queue);
  printf("Tail [666] : %d\n", ret);
  test_output(ret, 666);

  // Insert-Insert-Replace-Dequeue negative
  for (int i = 0; i < 32; i++)
  {
    queue_array_insert(343, -1, my_queue);
    queue_array_insert(666, -42, my_queue);
    queue_array_replace(1337, -1, my_queue);
    queue_array_dequeue(my_queue);
  }

  queue_array_delete(my_queue);

  printf("##################\n");
  printf("# END HARD TESTS #\n");
  printf("##################\n");
}
