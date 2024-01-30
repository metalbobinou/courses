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

  main_empty_queue_tests();

  return (0);
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_empty_queue_tests(void)
{
  int ret;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  queue_static_create();

  queue_static_delete();

  queue_static_enqueue(5);
  queue_static_enqueue(10);
  queue_static_enqueue(15);
  queue_static_enqueue(20);
  queue_static_clear();

  queue_static_enqueue(8);
  queue_static_enqueue(16);
  queue_static_enqueue(32);
  queue_static_enqueue(64);
  queue_static_dequeue();
  queue_static_dequeue();
  queue_static_dequeue();
  queue_static_dequeue();

  // Length 0
  ret = queue_static_length();
  printf("Length (STATIC) 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Max Length 0
  ret = queue_static_max_length();
  printf("Max Length (STATIC) 0 [%d] : %d\n", QUEUE_STATIC_MAX_LEN, ret);
  if (ret == QUEUE_STATIC_MAX_LEN)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Dequeue 0
  ret = queue_static_dequeue();
  printf("Dequeue (STATIC) 0 [-2] : %d\n", ret);
  test_output(ret, -2);

  // Head 0
  ret = queue_static_head();
  printf("Head (STATIC) 0 [-2] : %d\n", ret);
  test_output(ret, -2);

  // Tail 0
  ret = queue_static_tail();
  printf("Tail (STATIC) 0 [-2] : %d\n", ret);
  test_output(ret, -2);

  // Replace + 0
  ret = queue_static_replace(42, 6);
  printf("Replace 42 6 (STATIC) 0 [-2] : %d\n", ret);
  test_output(ret, -2);

  // Add negative value "elt" tests

  // Replace - 0
  ret = queue_static_replace(42, -6);
  printf("Replace 42 -6 (1) 0 [-2] : %d\n", ret);
  test_output(ret, -2);

  // Add negative value "elt" tests

  // Clear 0
  ret = queue_static_clear();
  printf("Clear (STATIC) 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Is Empty 0
  ret = queue_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  test_output(ret, 1);

  // Search 0
  ret = queue_static_search(5);
  printf("Search 5 (STATIC) 0 [-4] : %d\n", ret);
  test_output(ret, -4);

  // Printf 0
  printf("Print empty (STATIC) :\n");
  queue_static_print();

  // Reverse 0
  queue_static_reverse();
  ret = queue_static_length();
  printf("Reverse + Length (STATIC) 0 [0] : %d\n", ret);
  test_output(ret, 0);

  // Clear
  ret = queue_static_clear();

  ret = queue_static_is_empty();
  printf("Clear + Is Empty (STATIC) 0 [1] : %d\n", ret);
  test_output(ret, 1);

  // Delete
  queue_static_delete();

  ret = queue_static_is_empty();
  printf("Is Empty (STATIC) 0 [1] : %d\n", ret);
  test_output(ret, 1);

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
