#include "queues.h"

#include "tests_static.h"

#include <stdio.h>

/* Redefine here */
/* #define STACK_STATIC_MAX_LEN 42 */

int main(void)
{
  printf("----------------\n");
  printf("| QUEUE STATIC |\n");
  printf("----------------\n");

  main_regular_tests();

  return (0);
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_regular_tests(void)
{
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  queue_static_create();

  queue_static_enqueue(5);
  queue_static_enqueue(10);
  queue_static_enqueue(15);
  queue_static_enqueue(20);
  queue_static_clear();
  queue_static_enqueue(5);
  queue_static_enqueue(10);
  queue_static_enqueue(15);
  queue_static_enqueue(20);

  queue_static_enqueue(8);
  queue_static_enqueue(16);
  queue_static_enqueue(32);
  queue_static_enqueue(64);
  queue_static_dequeue();
  queue_static_dequeue();
  queue_static_dequeue();
  queue_static_dequeue();
  queue_static_enqueue(2);
  queue_static_enqueue(4);
  queue_static_enqueue(8);
  queue_static_enqueue(24);

  // Length
  ret = queue_static_length();
  printf("Length (STATIC) 8 [8] : %d\n", ret);
  test_output(ret, 8);

  // Max Length
  ret = queue_static_max_length();
  printf("Max Length (STATIC) 8 [%d] : %d\n", QUEUE_STATIC_MAX_LEN, ret);
  if (ret == QUEUE_STATIC_MAX_LEN)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Head
  ret = queue_static_head();
  printf("Head (STATIC) 8 [8] : %d\n", ret);
  test_output(ret, 8);

  // Tail
  ret = queue_static_tail();
  printf("Tail (STATIC) 8 [24] : %d\n", ret);
  test_output(ret, 24);

  // Dequeue
  ret = queue_static_dequeue();
  printf("Dequeue (STATIC) 7 [0] : %d\n", ret);
  test_output(ret, 0);
  ret = queue_static_length();
  printf("Length (STATIC) 7 [7] : %d\n", ret);
  test_output(ret, 7);

  // Head
  ret = queue_static_head();
  printf("Head (STATIC) 7 [16] : %d\n", ret);
  test_output(ret, 16);

  // Tail
  ret = queue_static_tail();
  printf("Tail (STATIC) 7 [24] : %d\n", ret);
  test_output(ret, 24);

  // Insert +
  ret = queue_static_insert(42, 1);
  printf("Insert 42 1 (STATIC) 8 [0] : %d\n", ret);
  test_output(ret, 0);
  ret = queue_static_length();
  printf("Length (STATIC) 8 [8] : %d\n", ret);
  test_output(ret, 8);
  printf("Print (STATIC) 8 [16 42 32 64 2 4 8 24] :\n");
  queue_static_print();

  // Insert -
  ret = queue_static_insert(1337, -1);
  printf("Insert 1337 -1 (STATIC) 9 [0] : %d\n", ret);
  test_output(ret, 0);
  ret = queue_static_length();
  printf("Length (STATIC) 9 [9] : %d\n", ret);
  test_output(ret, 9);
  ret = queue_static_head();
  printf("Head (STATIC) 9 [1337] : %d\n", ret);
  test_output(ret, 1337);

  printf("Print (STATIC) 9 [1337 16 42 32 64 2 4 8 24] :\n");
  queue_static_print();

  printf("[dequeue (STATIC) 8]\n");
  queue_static_dequeue();

  // Insert ++
  ret = queue_static_insert(666, 100);
  printf("Insert 666 100 (STATIC) 9 [0] : %d\n", ret);
  test_output(ret, 0);
  ret = queue_static_length();
  printf("Length (STATIC) 9 [9] : %d\n", ret);
  test_output(ret, 9);
  ret = queue_static_tail();
  printf("Tail (STATIC) 9 [666] : %d\n", ret);
  test_output(ret, 666);

  printf("Print (STATIC) 9 [16 42 32 64 2 4 8 24 666] :\n");
  queue_static_print();

  // Replace +
  ret = queue_static_replace(1024, 10);
  printf("Replace 1024 10 (STATIC) 9 [666] : %d\n", ret);
  test_output(ret, 666);
  ret = queue_static_length();
  printf("Length (STATIC) 9 [9] : %d\n", ret);
  test_output(ret, 9);
  ret = queue_static_head();
  printf("Head (STATIC) 9 [16] : %d\n", ret);
  test_output(ret, 16);
  ret = queue_static_tail();
  printf("Tail (STATIC) 9 [1024] : %d\n", ret);
  test_output(ret, 1024);

  printf("Print (STATIC) 9 [16 42 32 64 2 4 8 24 1024] :\n");
  queue_static_print();

  // Replace -
  ret = queue_static_replace(2048, -6);
  printf("Replace 2048 -6 (STATIC) 9 [16] : %d\n", ret);
  test_output(ret, 16);
  ret = queue_static_length();
  printf("Length (STATIC) 9 [9] : %d\n", ret);
  test_output(ret, 9);
  ret = queue_static_head();
  printf("Head (STATIC) 9 [2048] : %d\n", ret);
  test_output(ret, 2048);
  ret = queue_static_tail();
  printf("Tail (STATIC) 9 [1024] : %d\n", ret);
  test_output(ret, 1024);

  printf("Print (STATIC) 9 [2048 42 32 64 2 4 8 24 1024] :\n");
  queue_static_print();

  // Is Empty
  ret = queue_static_is_empty();
  printf("Is Empty (STATIC) 9 [0] : %d\n", ret);
  test_output(ret, 0);

  // Search
  ret = queue_static_search(5);
  printf("Search 5 (STATIC) 9 [-4] : %d\n", ret);
  test_output(ret, -4);
  ret = queue_static_search(8);
  printf("Search 8 (STATIC) 9 [6] : %d\n", ret);
  test_output(ret, 6);
  ret = queue_static_search(16);
  printf("Search 16 (STATIC) 9 [-4] : %d\n", ret);
  test_output(ret, -4);
  ret = queue_static_search(2);
  printf("Search 2 (STATIC) 9 [4] : %d\n", ret);
  test_output(ret, 4);
  ret = queue_static_search(20);
  printf("Search 20 (STATIC) 9 [-4] : %d\n", ret);
  test_output(ret, -4);
  ret = queue_static_search(1664);
  printf("Search 1664 (STATIC) 9 [-4] : %d\n", ret);
  test_output(ret, -4);

  // Printf
  printf("Print (STATIC) 9 [2048 42 32 64 2 4 8 24 1024] :\n");
  queue_static_print();

  // Reverse
  queue_static_reverse();
  ret = queue_static_length();
  printf("Reverse + Length (STATIC) 9 [9] : %d\n", ret);
  test_output(ret, 9);

  // Printf Reverse
  printf("Print Reverse (STATIC) 9 [1024 24 8 4 2 64 32 42 2048] :\n");
  queue_static_print();

  // Enqueue reverse
  ret = queue_static_enqueue(100);
  printf("Reverse + Enqueue 100 (STATIC) 10 [0] : %d\n", ret);
  test_output(ret, 0);

  // Enqueue reverse length
  ret = queue_static_length();
  printf("Reverse + Enqueue + Length (STATIC) 10 [10] : %d\n", ret);
  test_output(ret, 10);

  // Printf Enqueue reverse
  printf("Print Reverse (STATIC) 10 [100 1024 24 8 4 2 64 32 42 2048] :\n");
  queue_static_print();

  // Clear
  ret = queue_static_clear();
  printf("Clear (STATIC) 0 [10] : %d\n", ret);
  test_output(ret, 10);

  ret = queue_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Delete
  queue_static_enqueue(5);
  queue_static_enqueue(42);
  queue_static_enqueue(100);
  queue_static_delete();

  ret = queue_static_is_empty();
  printf("Is Empty (STATIC) 0 : %d\n", ret);
  test_output(ret, 1);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
