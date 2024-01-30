#include "queues.h"

#include "tests_array.h"

#include <stdio.h>

int main(void)
{
  printf("---------------\n");
  printf("| QUEUE ARRAY |\n");
  printf("---------------\n");

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
  queue_array *my_empty_queue = NULL;
  queue_array *my_queue1 = NULL;
  queue_array *my_queue2 = NULL;
  // queue_array *ptr = NULL;
  int ret1, ret2, ret_empty;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  my_queue1 = queue_array_create(6);
  my_queue2 = queue_array_create(6);
  my_empty_queue = queue_array_create(42);

  queue_array_enqueue(5, my_queue1);
  queue_array_enqueue(10, my_queue1);
  queue_array_enqueue(15, my_queue1);
  queue_array_enqueue(20, my_queue1);
  queue_array_clear(my_queue1);

  queue_array_enqueue(8, my_queue2);
  queue_array_enqueue(16, my_queue2);
  queue_array_enqueue(32, my_queue2);
  queue_array_enqueue(64, my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);

  // Length 0
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = queue_array_length(my_empty_queue);
  printf("Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Max Length 0
  ret1 = queue_array_max_length(my_queue1);
  printf("Max Length (1) [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret2 = queue_array_max_length(my_queue2);
  printf("Max Length (2) [6] : %d\n", ret2);
  test_output(ret2, 6);
  ret_empty = queue_array_max_length(my_empty_queue);
  printf("Max Length (empty) [42] : %d\n", ret_empty);
  test_output(ret_empty, 42);

  // Dequeue 0
  ret1 = queue_array_dequeue(my_queue1);
  printf("Dequeue (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_array_dequeue(my_queue2);
  printf("Dequeue (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_array_dequeue(my_empty_queue);
  printf("Dequeue (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Head 0
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_array_head(my_empty_queue);
  printf("Head (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Tail 0
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_array_tail(my_empty_queue);
  printf("Tail (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Replace + 0
  ret1 = queue_array_replace(42, 6, my_queue1);
  printf("Replace 42 6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_array_replace(42, 6, my_queue2);
  printf("Replace 42 6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_array_replace(42, 6, my_empty_queue);
  printf("Replace 42 6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Replace - 0
  ret1 = queue_array_replace(42, -6, my_queue1);
  printf("Replace 42 -6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_array_replace(42, -6, my_queue2);
  printf("Replace 42 -6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_array_replace(42, -6, my_empty_queue);
  printf("Replace 42 -6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Clear 0
  ret1 = queue_array_clear(my_queue1);
  printf("Clear (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_array_clear(my_queue2);
  printf("Clear (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = queue_array_clear(my_empty_queue);
  printf("Clear (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Is Empty 0
  ret1 = queue_array_is_empty(my_queue1);
  printf("Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = queue_array_is_empty(my_queue2);
  printf("Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = queue_array_is_empty(my_empty_queue);
  printf("Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Search 0
  ret1 = queue_array_search(5, my_queue1);
  printf("Search 5 (1) [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret2 = queue_array_search(8, my_queue2);
  printf("Search 8 (2) [-4] : %d\n", ret2);
  test_output(ret2, -4);
  ret_empty = queue_array_search(42, my_empty_queue);
  printf("Search 42 (empty) [-4] : %d\n", ret_empty);
  test_output(ret_empty, -4);

  // Printf 0
  printf("Print empty (1) :\n");
  queue_array_print(my_queue1);
  printf("Print empty (2) :\n");
  queue_array_print(my_queue2);
  printf("Print empty (empty) :\n");
  queue_array_print(my_empty_queue);

  // Reverse 0
  my_queue1 = queue_array_reverse(my_queue1);
  ret1 = queue_array_length(my_queue1);
  printf("Reverse + Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  my_queue2 = queue_array_reverse(my_queue2);
  ret2 = queue_array_length(my_queue2);
  printf("Reverse + Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  my_empty_queue = queue_array_reverse(my_empty_queue);
  ret_empty = queue_array_length(my_empty_queue);
  printf("Reverse + Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Clear
  queue_array_clear(my_queue1);
  queue_array_clear(my_queue2);
  queue_array_clear(my_empty_queue);

  ret1 = queue_array_is_empty(my_queue1);
  printf("Clear + Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = queue_array_is_empty(my_queue2);
  printf("Clear + Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = queue_array_is_empty(my_empty_queue);
  printf("Clear + Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Delete
  queue_array_delete(my_queue1);
  queue_array_delete(my_queue2);
  queue_array_delete(my_empty_queue);

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
