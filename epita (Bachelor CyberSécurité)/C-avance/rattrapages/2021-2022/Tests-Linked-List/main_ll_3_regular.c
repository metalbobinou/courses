#include "linkedlist.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| QUEUE LINKED LIST |\n");
  printf("---------------------\n");

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
  my_linkedlist *my_ll_1 = NULL;
  my_linkedlist *my_ll_2 = NULL;
  // my_linkedlist *ptr = NULL;
  int ret1, ret2;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  my_ll_1 = ll_create();
  my_ll_2 = ll_create();

  ll_insert(5, 0, my_ll_1);
  ll_insert(10, 1, my_ll_1);
  ll_insert(15, 2, my_ll_1);
  ll_insert(20, 3, my_ll_1);
  ll_clear(my_ll_1);
  ll_insert(5, 0, my_ll_1);
  ll_insert(10, 1, my_ll_1);
  ll_insert(15, 2, my_ll_1);
  ll_insert(20, 3, my_ll_1);

  ll_insert(8, 0, my_ll_2);
  ll_insert(16, 1, my_ll_2);
  ll_insert(32, 2, my_ll_2);
  ll_insert(64, 3, my_ll_2);
  ll_remove(3, my_ll_2);
  ll_remove(2, my_ll_2);
  ll_remove(1, my_ll_2);
  ll_remove(0, my_ll_2);
  ll_insert(2, 0, my_ll_2);
  ll_insert(4, 1, my_ll_2);
  ll_insert(8, 2, my_ll_2);
  ll_insert(16, 3, my_ll_2);

  //             0   1   2   3
  // my_ll_1 = [ 5, 10, 15, 20]
  // my_ll_2 = [ 2,  4,  8, 16]

  // Length
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 4 [4] : %d\n", ret1);
  test_output(ret1, 4);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 4 [4] : %d\n", ret2);
  test_output(ret2, 4);

  // Remove 0
  ret1 = ll_remove(0, my_ll_1);
  printf("Remove 0 (1) 3 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = ll_length(my_ll_1);
  printf("Remove 0 + Length (1) 3 [3] : %d\n", ret1);
  test_output(ret1, 3);
  ret2 = ll_remove(0, my_ll_2);
  printf("Remove 0 (2) 3 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = ll_length(my_ll_2);
  printf("Remove 0 + Length (2) 3 [3] : %d\n", ret2);
  test_output(ret2, 3);

  //             0   1   2   3
  // my_ll_1 = [10, 15, 20]
  // my_ll_2 = [ 4,  8, 16]

  // Head
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 3 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) 3 [4] : %d\n", ret2);
  test_output(ret2, 4);

  // Tail
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 3 [20] : %d\n", ret1);
  test_output(ret1, 20);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 3 [16] : %d\n", ret2);
  test_output(ret2, 16);

  // Get 2
  ret1 = ll_get(2, my_ll_1);
  printf("Get 2 (1) 3 [20] : %d\n", ret1);
  test_output(ret1, 20);
  ret2 = ll_get(2, my_ll_2);
  printf("Get 2 (2) 3 [16] : %d\n", ret2);
  test_output(ret2, 16);

  // Insert +
  ret1 = ll_insert(42, 1, my_ll_1);
  printf("Insert 42 1 (1) 4 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 4 [4] : %d\n", ret1);
  test_output(ret1, 4);
  printf("Print (1) 4 [10 42 15 20] :\n");
  ll_print(my_ll_1);
  ret2 = ll_insert(42, 1, my_ll_2);
  printf("Insert 42 1 (2) 4 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 4 [4] : %d\n", ret2);
  test_output(ret2, 4);
  printf("Print (2) 4 [4 42 8 16] :\n");
  ll_print(my_ll_2);

  //             0   1   2   3
  // my_ll_1 = [10, 42, 15, 20]
  // my_ll_2 = [ 4, 42,  8, 16]

  // Insert -
  ret1 = ll_insert(1337, -1, my_ll_1);
  printf("Insert 1337 -1 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 5 [1337] : %d\n", ret1);
  test_output(ret1, 1337);
  ret2 = ll_insert(1337, -1, my_ll_2);
  printf("Insert 1337 -1 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 4 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) 5 [1337] : %d\n", ret2);
  test_output(ret2, 1337);

  //             0     1   2   3   4
  // my_ll_1 = [1337, 10, 42, 15, 20]
  // my_ll_2 = [1337,  4, 42,  8, 16]

  printf("Print (1) 5 [1337 10 42 15 20] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [1337 4 42 8 16] :\n");
  ll_print(my_ll_2);

  printf("[remove (1) 1337 and (2) 1337]\n");
  ll_remove(0, my_ll_1);
  ll_remove(0, my_ll_2);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20]
  // my_ll_2 = [ 4, 42,  8, 16]

  // Insert ++
  ret1 = ll_insert(666, 100, my_ll_1);
  printf("Insert 666 100 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = ll_insert(666, 100, my_ll_2);
  printf("Insert 666 100 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 666]
  // my_ll_2 = [ 4, 42,  8, 16, 666]

  printf("Print (1) 5 [10 42 15 20 666] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [4 42 8 16 666] :\n");
  ll_print(my_ll_2);

  // Replace +
  ret1 = ll_replace(999, 1, my_ll_1);
  printf("Replace 999 1 (1) 5 [42] : %d\n", ret1);
  test_output(ret1, 42);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = ll_replace(999, 1, my_ll_2);
  printf("Replace 999 1 (2) [42] : %d\n", ret2);
  test_output(ret2, 42);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) 5 [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  //             0   1    2   3   4
  // my_ll_1 = [10, 999, 15, 20, 666]
  // my_ll_2 = [ 4, 999,  8, 16, 666]

  ll_replace(42, 1, my_ll_1);
  ll_replace(42, 1, my_ll_2);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 666]
  // my_ll_2 = [ 4, 42,  8, 16, 666]

  ret1 = ll_replace(999, 0, my_ll_1);
  printf("Replace 999 0 (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 5 [999] : %d\n", ret1);
  test_output(ret1, 999);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret2 = ll_replace(999, 0, my_ll_2);
  printf("Replace 999 0 (2) [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) 5 [999] : %d\n", ret2);
  test_output(ret2, 999);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 5 [666] : %d\n", ret2);
  test_output(ret2, 666);

  //             0    1   2   3   4
  // my_ll_1 = [999, 42, 15, 20, 666]
  // my_ll_2 = [999, 42,  8, 16, 666]

  ll_replace(10, 0, my_ll_1);
  ll_replace(4, 0, my_ll_2);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 666]
  // my_ll_2 = [ 4, 42,  8, 16, 666]

  ret1 = ll_replace(999, 4, my_ll_1);
  printf("Replace 999 4 (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 5 [999] : %d\n", ret1);
  test_output(ret1, 999);
  ret2 = ll_replace(999, 4, my_ll_2);
  printf("Replace 999 4 (2) [666] : %d\n", ret2);
  test_output(ret2, 666);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) 5 [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 5 [999] : %d\n", ret2);
  test_output(ret2, 999);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 999]
  // my_ll_2 = [ 4, 42,  8, 16, 999]

  ll_replace(666, 4, my_ll_1);
  ll_replace(666, 4, my_ll_2);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 666]
  // my_ll_2 = [ 4, 42,  8, 16, 666]

  printf("Print (1) 5 [10 42 15 20 666] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [4 42 8 16 666] :\n");
  ll_print(my_ll_2);

  // Replace ++
  ret1 = ll_replace(1024, 6, my_ll_1);
  printf("Replace 1024 6 (1) 5 [666] : %d\n", ret1);
  test_output(ret1, 666);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 5 [1024] : %d\n", ret1);
  test_output(ret1, 1024);
  ret2 = ll_replace(1024, 6, my_ll_2);
  printf("Replace 1024 6 (2) [666] : %d\n", ret2);
  test_output(ret2, 666);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) 5 [1024] : %d\n", ret2);
  test_output(ret2, 1024);

  //             0   1   2   3   4
  // my_ll_1 = [10, 42, 15, 20, 1024]
  // my_ll_2 = [ 4, 42,  8, 16, 1024]

  printf("Print (1) 5 [10 42 15 20 1024] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [4 42 8 16 1024] :\n");
  ll_print(my_ll_2);

  // Replace -
  ret1 = ll_replace(2048, -6, my_ll_1);
  printf("Replace 2048 -6 (1) 5 [10] : %d\n", ret1);
  test_output(ret1, 10);
  ret1 = ll_length(my_ll_1);
  printf("Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 5 [2048] : %d\n", ret1);
  test_output(ret1, 2048);
  ret2 = ll_replace(2048, -6, my_ll_2);
  printf("Replace 2048 -6 (2) [4] : %d\n", ret2);
  test_output(ret2, 4);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);
  ret2 = ll_head(my_ll_2);
  printf("Tail (2) 5 [2048] : %d\n", ret2);
  test_output(ret2, 2048);

  //             0     1   2   3   4
  // my_ll_1 = [2048, 42, 15, 20, 1024]
  // my_ll_2 = [2048, 42,  8, 16, 1024]

  printf("Print (1) 5 [2048 42 15 20 1024] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [2048 42 8 16 1024] :\n");
  ll_print(my_ll_2);

  // Is Empty
  ret1 = ll_is_empty(my_ll_1);
  printf("Is Empty (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = ll_is_empty(my_ll_2);
  printf("Is Empty (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);

  //             0     1   2   3   4
  // my_ll_1 = [2048, 42, 15, 20, 1024]
  // my_ll_2 = [2048, 42,  8, 16, 1024]

  // Search
  ret1 = ll_search(2048, my_ll_1);
  printf("Search 2048 (1) 5 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret1 = ll_search(15, my_ll_1);
  printf("Search 15 (1) 5 [2] : %d\n", ret1);
  test_output(ret1, 2);
  ret1 = ll_search(5, my_ll_1);
  printf("Search 5 (1) 5 [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret1 = ll_search(4096, my_ll_1);
  printf("Search 4096 (1) 5 [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret2 = ll_search(2048, my_ll_2);
  printf("Search 2048 (2) 5 [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret2 = ll_search(8, my_ll_2);
  printf("Search 8 (2) 5 [2] : %d\n", ret2);
  test_output(ret2, 2);
  ret2 = ll_search(2, my_ll_2);
  printf("Search 2 (2) 5 [-4] : %d\n", ret2);
  test_output(ret2, -4);
  ret2 = ll_search(4096, my_ll_2);
  printf("Search 4096 (2) 5 [-4] : %d\n", ret2);
  test_output(ret2, -4);

  // Printf
  printf("Print (1) 5 [2048 42 15 20 1024] :\n");
  ll_print(my_ll_1);
  printf("Print (2) 5 [2048 42 8 16 1024] :\n");
  ll_print(my_ll_2);

  //             0     1   2   3   4
  // my_ll_1 = [2048, 42, 15, 20, 1024]
  // my_ll_2 = [2048, 42,  8, 16, 1024]

  // Reverse
  my_ll_1 = ll_reverse(my_ll_1);
  ret1 = ll_length(my_ll_1);
  printf("Reverse + Length (1) 5 [5] : %d\n", ret1);
  test_output(ret1, 5);
  my_ll_2 = ll_reverse(my_ll_2);
  ret2 = ll_length(my_ll_2);
  printf("Reverse + Length (2) 5 [5] : %d\n", ret2);
  test_output(ret2, 5);

  //             0     1   2   3   4
  // my_ll_1 = [1024, 20, 15, 42, 2048]
  // my_ll_2 = [1024, 16,  8, 42, 2048]

  // Printf Reverse
  printf("Print Reverse (1) 5 [1024 20 15 42 2048] :\n");
  ll_print(my_ll_1);
  printf("Print Reverse (2) 5 [1024 16 8 42 2048] :\n");
  ll_print(my_ll_2);

  // Insert reverse
  ret1 = ll_insert(100, 0, my_ll_1);
  printf("Reverse + Insert 100 0 (1) 6 [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = ll_insert(200, 0, my_ll_2);
  printf("Reverse + Insert 200 0 (2) 6 [0] : %d\n", ret2);
  test_output(ret2, 0);

  //             0     1   2   3   4     5
  // my_ll_1 = [100, 1024, 20, 15, 42, 2048]
  // my_ll_2 = [200, 1024, 16,  8, 42, 2048]

  // Insert reverse length
  ret1 = ll_length(my_ll_1);
  printf("Reverse + Insert 100 + Length (1) 6 [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) 6 [2048] : %d\n", ret1);
  test_output(ret1, 2048);
  ret1 = ll_head(my_ll_1);
  printf("Head (1) 6 [100] : %d\n", ret1);
  test_output(ret1, 100);
  ret2 = ll_length(my_ll_2);
  printf("Reverse + Insert 200 + Length (2) 6 [6] : %d\n", ret2);
  test_output(ret2, 6);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (1) 6 [2048] : %d\n", ret2);
  test_output(ret2, 2048);
  ret2 = ll_head(my_ll_2);
  printf("Head (1) 6 [200] : %d\n", ret2);
  test_output(ret2, 200);

  //             0     1   2   3   4     5
  // my_ll_1 = [100, 1024, 20, 15, 42, 2048]
  // my_ll_2 = [200, 1024, 16,  8, 42, 2048]

  // Printf reverse
  printf("Print Reverse (1) 6 [100 1024 20 15 42 2048] :\n");
  ll_print(my_ll_1);
  printf("Print Reverse (2) 6 [200 1024 16 8 42 2048] :\n");
  ll_print(my_ll_2);

  // Clear
  ret1 = ll_clear(my_ll_1);
  printf("Clear (1) 0 [6] : %d\n", ret1);
  test_output(ret1, 6);
  ret2 = ll_clear(my_ll_2);
  printf("Clear (2) 0 [6] : %d\n", ret2);
  test_output(ret2, 6);

  ret1 = ll_is_empty(my_ll_1);
  printf("Is Empty (1) 0 [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = ll_is_empty(my_ll_2);
  printf("Is Empty (2) 0 [1] : %d\n", ret2);
  test_output(ret2, 1);

  // Delete
  ll_insert(5, 0, my_ll_1);
  ll_insert(42, 1, my_ll_1);
  ll_insert(100, 2, my_ll_1);
  ll_delete(my_ll_1);
  ll_delete(my_ll_2);

  printf("#####################\n");
  printf("# END REGULAR TESTS #\n");
  printf("#####################\n");
}
