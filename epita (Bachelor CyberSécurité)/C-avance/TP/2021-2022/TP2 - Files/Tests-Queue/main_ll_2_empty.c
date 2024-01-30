#include "queues.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| QUEUE LINKED LIST |\n");
  printf("---------------------\n");

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
  queue_ll *my_empty_queue = NULL;
  queue_ll *my_queue1 = NULL;
  queue_ll *my_queue2 = NULL;
  // queue_ll *ptr = NULL;
  int ret1, ret2, ret_empty;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  my_queue1 = queue_ll_create();
  my_queue2 = queue_ll_create();
  my_empty_queue = queue_ll_create();

  queue_ll_enqueue(5, my_queue1);
  queue_ll_enqueue(10, my_queue1);
  queue_ll_enqueue(15, my_queue1);
  queue_ll_enqueue(20, my_queue1);
  queue_ll_clear(my_queue1);

  queue_ll_enqueue(8, my_queue2);
  queue_ll_enqueue(16, my_queue2);
  queue_ll_enqueue(32, my_queue2);
  queue_ll_enqueue(64, my_queue2);
  queue_ll_dequeue(my_queue2);
  queue_ll_dequeue(my_queue2);
  queue_ll_dequeue(my_queue2);
  queue_ll_dequeue(my_queue2);

  // Length 0
  ret1 = queue_ll_length(my_queue1);
  printf("Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_ll_length(my_queue2);
  printf("Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = queue_ll_length(my_empty_queue);
  printf("Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Dequeue 0
  ret1 = queue_ll_dequeue(my_queue1);
  printf("Dequeue (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_ll_dequeue(my_queue2);
  printf("Dequeue (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_ll_dequeue(my_empty_queue);
  printf("Dequeue (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Head 0
  ret1 = queue_ll_head(my_queue1);
  printf("Head (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_ll_head(my_queue2);
  printf("Head (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_ll_head(my_empty_queue);
  printf("Head (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Tail 0
  ret1 = queue_ll_tail(my_queue1);
  printf("Tail (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_ll_tail(my_queue2);
  printf("Tail (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_ll_tail(my_empty_queue);
  printf("Tail (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Replace + 0
  ret1 = queue_ll_replace(42, 6, my_queue1);
  printf("Replace 42 6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_ll_replace(42, 6, my_queue2);
  printf("Replace 42 6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_ll_replace(42, 6, my_empty_queue);
  printf("Replace 42 6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Replace - 0
  ret1 = queue_ll_replace(42, -6, my_queue1);
  printf("Replace 42 -6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = queue_ll_replace(42, -6, my_queue2);
  printf("Replace 42 -6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = queue_ll_replace(42, -6, my_empty_queue);
  printf("Replace 42 -6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Clear 0
  ret1 = queue_ll_clear(my_queue1);
  printf("Clear (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_ll_clear(my_queue2);
  printf("Clear (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = queue_ll_clear(my_empty_queue);
  printf("Clear (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Is Empty 0
  ret1 = queue_ll_is_empty(my_queue1);
  printf("Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = queue_ll_is_empty(my_queue2);
  printf("Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = queue_ll_is_empty(my_empty_queue);
  printf("Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Search 0
  ret1 = queue_ll_search(5, my_queue1);
  printf("Search 5 (1) [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret2 = queue_ll_search(8, my_queue2);
  printf("Search 8 (2) [-4] : %d\n", ret2);
  test_output(ret2, -4);
  ret_empty = queue_ll_search(42, my_empty_queue);
  printf("Search 42 (empty) [-4] : %d\n", ret_empty);
  test_output(ret_empty, -4);

  // Printf 0
  printf("Print empty (1) :\n");
  queue_ll_print(my_queue1);
  printf("Print empty (2) :\n");
  queue_ll_print(my_queue2);
  printf("Print empty (empty) :\n");
  queue_ll_print(my_empty_queue);

  // Reverse 0
  my_queue1 = queue_ll_reverse(my_queue1);
  ret1 = queue_ll_length(my_queue1);
  printf("Reverse + Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  my_queue2 = queue_ll_reverse(my_queue2);
  ret2 = queue_ll_length(my_queue2);
  printf("Reverse + Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  my_empty_queue = queue_ll_reverse(my_empty_queue);
  ret_empty = queue_ll_length(my_empty_queue);
  printf("Reverse + Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Clear 0
  queue_ll_clear(my_queue1);
  queue_ll_clear(my_queue2);
  queue_ll_clear(my_empty_queue);

  ret1 = queue_ll_is_empty(my_queue1);
  printf("Clear + Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = queue_ll_is_empty(my_queue2);
  printf("Clear + Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = queue_ll_is_empty(my_empty_queue);
  printf("Clear + Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Delete
  queue_ll_delete(my_queue1);
  queue_ll_delete(my_queue2);
  queue_ll_delete(my_empty_queue);

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
