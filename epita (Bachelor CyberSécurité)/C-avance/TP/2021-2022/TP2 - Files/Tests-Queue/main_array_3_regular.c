#include "queues.h"

#include "tests_array.h"

#include <stdio.h>

int main(void)
{
  printf("---------------\n");
  printf("| QUEUE ARRAY |\n");
  printf("---------------\n");

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
  queue_array *my_queue1 = NULL;
  queue_array *my_queue2 = NULL;
  // queue_array *ptr = NULL;
  int ret1, ret2;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  my_queue1 = queue_array_create(6);
  my_queue2 = queue_array_create(10);

  queue_array_enqueue(5, my_queue1);
  queue_array_enqueue(10, my_queue1);
  queue_array_enqueue(15, my_queue1);
  queue_array_enqueue(20, my_queue1);
  queue_array_clear(my_queue1);
  queue_array_enqueue(5, my_queue1);
  queue_array_enqueue(10, my_queue1);
  queue_array_enqueue(15, my_queue1);
  queue_array_enqueue(20, my_queue1);

  queue_array_enqueue(8, my_queue2);
  queue_array_enqueue(16, my_queue2);
  queue_array_enqueue(32, my_queue2);
  queue_array_enqueue(64, my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_dequeue(my_queue2);
  queue_array_enqueue(2, my_queue2);
  queue_array_enqueue(4, my_queue2);
  queue_array_enqueue(8, my_queue2);
  queue_array_enqueue(16, my_queue2);

  // Length
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 4 [4] : %d\n", ret1);
  test_output(ret1, 4);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 4 [4] : %d\n", ret2);
  test_output(ret2, 4);

  // Max Length
  ret1 = queue_array_max_length(my_queue1);
  printf("Max Length (1) 4 [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret2 = queue_array_max_length(my_queue2);
  printf("Max Length (2) 4 [10] : %d\n", ret2);
  test_output(ret2, 10);

  // Dequeue
  ret1 = queue_array_dequeue(my_queue1);
  printf("Dequeue (1) 3 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = queue_array_length(my_queue1);
  printf("Dequeue + Length (1) 3 [3] : %d\n", ret1);
  test_output(ret1, 3);
  ret2 = queue_array_dequeue(my_queue2);
  printf("Dequeue (2) 3 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = queue_array_length(my_queue2);
  printf("Dequeue + Length (2) 3 [3] : %d\n", ret2);
  test_output(ret2, 3);

  // Head
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 3 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) 3 [4] : %d\n", ret2);
  test_output(ret2, 4);

  // Tail
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 3 [20] : %d\n", ret1);
  test_output(ret1, 20);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 3 [16] : %d\n", ret2);
  test_output(ret2, 16);

  // Insert +
  ret1 = queue_array_insert(42, 1, my_queue1);
  printf("Insert 42 1 (1) 4 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 4 [4] : %d\n", ret1);
  test_output(ret1, 4);
  printf("Print (1) 4 [10 42 15 20] :\n");
  queue_array_print(my_queue1);
  ret2 = queue_array_insert(42, 1, my_queue2);
  printf("Insert 42 1 (2) 4 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 4 [4] : %d\n", ret2);
  test_output(ret2, 4);
  printf("Print (2) 4 [4 42 8 16] :\n");
  queue_array_print(my_queue2);

  // Insert -
  ret1 = queue_array_insert(1337, -1, my_queue1);
  printf("Insert 1337 -1 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 5 [1337] : %d\n", ret1);
  test_output(ret1, 1337);
  ret2 = queue_array_insert(1337, -1, my_queue2);
  printf("Insert 1337 -1 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) 5 [1337] : %d\n", ret2);
  test_output(ret2, 1337);

  printf("Print (1) 5 [1337 10 42 15 20] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [1337 4 42 8 16] :\n");
  queue_array_print(my_queue2);

  printf("[dequeue (1) 4 and (2) 4]\n");
  queue_array_dequeue(my_queue1);
  queue_array_dequeue(my_queue2);

  // Insert ++
  ret1 = queue_array_insert(666, 100, my_queue1);
  printf("Insert 666 100 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = queue_array_insert(666, 100, my_queue2);
  printf("Insert 666 100 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  printf("Print (1) 5 [10 42 15 20 666] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [4 42 8 16 666] :\n");
  queue_array_print(my_queue2);

  // Replace +
  ret1 = queue_array_replace(999, 1, my_queue1);
  printf("Replace 999 1 (1) 5 [42] : %d\n", ret1);
  test_output(ret1, 42);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = queue_array_replace(999, 1, my_queue2);
  printf("Replace 999 1 (2) [42] : %d\n", ret2);
  test_output(ret2, 42);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) 5 [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  queue_array_replace(42, 1, my_queue1);
  queue_array_replace(42, 1, my_queue2);

  ret1 = queue_array_replace(999, 0, my_queue1);
  printf("Replace 999 0 (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 5 [999] : %d\n", ret1);
  test_output(ret1, 999);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = queue_array_replace(999, 0, my_queue2);
  printf("Replace 999 0 (2) [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) 5 [999] : %d\n", ret2);
  test_output(ret2, 999);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  queue_array_replace(10, 0, my_queue1);
  queue_array_replace(4, 0, my_queue2);

  ret1 = queue_array_replace(999, 4, my_queue1);
  printf("Replace 999 4 (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 5 [999] : %d\n", ret1);
  test_output(ret1, 999);
  ret2 = queue_array_replace(999, 4, my_queue2);
  printf("Replace 999 4 (2) [666] : %d\n", ret2);
  test_output(ret2, 666);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_head(my_queue2);
  printf("Head (2) 5 [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 5 [999] : %d\n", ret2);
  test_output(ret2, 999);

  queue_array_replace(666, 4, my_queue1);
  queue_array_replace(666, 4, my_queue2);

  printf("Print (1) 5 [10 42 15 20 666] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [4 42 8 16 666] :\n");
  queue_array_print(my_queue2);

  // Replace ++
  ret1 = queue_array_replace(1024, 6, my_queue1);
  printf("Replace 1024 6 (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 5 [1024] : %d\n", ret1);
  test_output(ret1, 1024);
  ret2 = queue_array_replace(1024, 6, my_queue2);
  printf("Replace 1024 6 (2) [666] : %d\n", ret2);
  test_output(ret2, 666);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (2) 5 [1024] : %d\n", ret2);
  test_output(ret2, 1024);

  printf("Print (1) 5 [10 42 15 20 1024] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [4 42 8 16 1024] :\n");
  queue_array_print(my_queue2);

  // Replace -
  ret1 = queue_array_replace(2048, -6, my_queue1);
  printf("Replace 2048 -6 (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = queue_array_length(my_queue1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 5 [2048] : %d\n", ret1);
  test_output(ret1, 2048);
  ret2 = queue_array_replace(2048, -6, my_queue2);
  printf("Replace 2048 -6 (2) [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = queue_array_length(my_queue2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = queue_array_head(my_queue2);
  printf("Tail (2) 5 [2048] : %d\n", ret2);
  test_output(ret2, 2048);

  printf("Print (1) 5 [2048 42 15 20 1024] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [2048 42 8 16 1024] :\n");
  queue_array_print(my_queue2);

  // Is Empty
  ret1 = queue_array_is_empty(my_queue1);
  printf("Is Empty (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_array_is_empty(my_queue2);
  printf("Is Empty (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);

  // Search
  ret1 = queue_array_search(2048, my_queue1);
  printf("Search 2048 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = queue_array_search(15, my_queue1);
  printf("Search 15 (1) 5 [2] : %d\n", ret1);
  test_output(ret1, 2);
  ret1 = queue_array_search(5, my_queue1);
  printf("Search 5 (1) 5 [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret1 = queue_array_search(4096, my_queue1);
  printf("Search 4096 (1) 5 [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret2 = queue_array_search(2048, my_queue2);
  printf("Search 2048 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = queue_array_search(8, my_queue2);
  printf("Search 8 (2) 5 [2] : %d\n", ret2);
  test_output(ret2, 2);
  ret2 = queue_array_search(2, my_queue2);
  printf("Search 2 (2) 5 [-4] : %d\n", ret2);
  test_output(ret2, -4);
  ret2 = queue_array_search(4096, my_queue2);
  printf("Search 4096 (2) 5 [-4] : %d\n", ret2);
  test_output(ret2, -4);

  // Printf
  printf("Print (1) 5 [2048 42 15 20 1024] :\n");
  queue_array_print(my_queue1);
  printf("Print (2) 5 [2048 42 8 16 1024] :\n");
  queue_array_print(my_queue2);

  // Reverse
  my_queue1 = queue_array_reverse(my_queue1);
  ret1 = queue_array_length(my_queue1);
  printf("Reverse + Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  my_queue2 = queue_array_reverse(my_queue2);
  ret2 = queue_array_length(my_queue2);
  printf("Reverse + Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);

  // Printf Reverse
  printf("Print Reverse (1) 5 [1024 20 15 42 2048] :\n");
  queue_array_print(my_queue1);
  printf("Print Reverse (2) 5 [1024 16 8 42 2048] :\n");
  queue_array_print(my_queue2);

  // Enqueue reverse
  ret1 = queue_array_enqueue(100, my_queue1);
  printf("Reverse + Enqueue 100 (1) 6 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = queue_array_enqueue(200, my_queue2);
  printf("Reverse + Enqueue 200 (2) 6 [0] : %d\n", ret2);
  test_output(ret2, 0);

  // Enqueue reverse length
  ret1 = queue_array_length(my_queue1);
  printf("Reverse + Enqueue 100 + Length (1) 6 [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret1 = queue_array_tail(my_queue1);
  printf("Tail (1) 6 [100] : %d\n", ret1);
  test_output(ret1, 100);
  ret1 = queue_array_head(my_queue1);
  printf("Head (1) 6 [1024] : %d\n", ret1);
  test_output(ret1, 1024);
  ret2 = queue_array_length(my_queue2);
  printf("Reverse + Enqueue 200 + Length (2) 6 [6] : %d\n", ret2);
  test_output(ret2, 6);
  ret2 = queue_array_tail(my_queue2);
  printf("Tail (1) 6 [200] : %d\n", ret2);
  test_output(ret2, 200);
  ret2 = queue_array_head(my_queue2);
  printf("Head (1) 6 [1024] : %d\n", ret2);
  test_output(ret2, 1024);

  // Printf Enqueue reverse
  printf("Print Reverse (1) 6 [1024 20 15 42 2048 100] :\n");
  queue_array_print(my_queue1);
  printf("Print Reverse (2) 6 [1024 16 8 42 2048 200] :\n");
  queue_array_print(my_queue2);

  // Clear
  ret1 = queue_array_clear(my_queue1);
  printf("Clear (1) 0 [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret2 = queue_array_clear(my_queue2);
  printf("Clear (2) 0 [6] : %d\n", ret2);
  test_output(ret2, 6);

  ret1 = queue_array_is_empty(my_queue1);
  printf("Is Empty (1) 0 [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = queue_array_is_empty(my_queue2);
  printf("Is Empty (2) 0 [1] : %d\n", ret2);
  test_output(ret2, 1);

  // Delete
  queue_array_enqueue(5, my_queue1);
  queue_array_enqueue(42, my_queue1);
  queue_array_enqueue(100, my_queue1);
  queue_array_delete(my_queue1);
  queue_array_delete(my_queue2);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
