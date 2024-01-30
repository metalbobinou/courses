#include "linkedlist.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| QUEUE LINKED LIST |\n");
  printf("---------------------\n");

  main_empty_tests();

  return (0);
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_empty_tests(void)
{
  my_linkedlist *my_empty_ll = NULL;
  my_linkedlist *my_ll_1 = NULL;
  my_linkedlist *my_ll_2 = NULL;
  // my_linkedlist *ptr = NULL;
  int ret1, ret2, ret_empty;

  printf("###############\n");
  printf("# EMPTY TESTS #\n");
  printf("###############\n");

  my_ll_1 = ll_create();
  my_ll_2 = ll_create();
  my_empty_ll = ll_create();

  ll_insert(5, 0, my_ll_1);
  ll_insert(10, 1, my_ll_1);
  ll_insert(15, 2, my_ll_1);
  ll_insert(20, 3, my_ll_1);
  ll_clear(my_ll_1);

  ll_insert(8, 0, my_ll_2);
  ll_insert(16, 1, my_ll_2);
  ll_insert(32, 2, my_ll_2);
  ll_insert(64, 3, my_ll_2);
  ll_remove(3, my_ll_2);
  ll_remove(2, my_ll_2);
  ll_remove(1, my_ll_2);
  ll_remove(0, my_ll_2);

  // Length 0
  ret1 = ll_length(my_ll_1);
  printf("Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = ll_length(my_ll_2);
  printf("Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = ll_length(my_empty_ll);
  printf("Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Remove 0
  ret1 = ll_remove(0, my_ll_1);
  printf("Remove 0 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_remove(0, my_ll_2);
  printf("Remove 0 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_remove(0, my_empty_ll);
  printf("Remove 0 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Head 0
  ret1 = ll_head(my_ll_1);
  printf("Head (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_head(my_ll_2);
  printf("Head (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_head(my_empty_ll);
  printf("Head (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Tail 0
  ret1 = ll_tail(my_ll_1);
  printf("Tail (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_tail(my_ll_2);
  printf("Tail (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_tail(my_empty_ll);
  printf("Tail (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Get 0
  ret1 = ll_get(0, my_ll_1);
  printf("Get 0 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_get(0, my_ll_2);
  printf("Get 0 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_get(0, my_empty_ll);
  printf("Get 0 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Get 5
  ret1 = ll_get(5, my_ll_1);
  printf("Get 5 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_get(5, my_ll_2);
  printf("Get 5 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_get(5, my_empty_ll);
  printf("Get 5 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Replace + 0
  ret1 = ll_replace(42, 6, my_ll_1);
  printf("Replace 42 6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_replace(42, 6, my_ll_2);
  printf("Replace 42 6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_replace(42, 6, my_empty_ll);
  printf("Replace 42 6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Replace Neg + 0
  //ret1 = ll_replace(-42, 6, my_ll_1);
  //printf("Replace -42 6 (1) [-2] : %d\n", ret1);
  //test_output(ret1, -2);
  //ret2 = ll_replace(-42, 6, my_ll_2);
  //printf("Replace -42 6 (2) [-2] : %d\n", ret2);
  //test_output(ret2, -2);
  //ret_empty = ll_replace(-42, 6, my_empty_ll);
  //printf("Replace -42 6 (empty) [-2] : %d\n", ret_empty);
  //test_output(ret_empty, -2);

  // Replace - 0
  ret1 = ll_replace(42, -6, my_ll_1);
  printf("Replace 42 -6 (1) [-2] : %d\n", ret1);
  test_output(ret1, -2);
  ret2 = ll_replace(42, -6, my_ll_2);
  printf("Replace 42 -6 (2) [-2] : %d\n", ret2);
  test_output(ret2, -2);
  ret_empty = ll_replace(42, -6, my_empty_ll);
  printf("Replace 42 -6 (empty) [-2] : %d\n", ret_empty);
  test_output(ret_empty, -2);

  // Add negative value "elt" tests

  // Replace Neg - 0
  //ret1 = ll_replace(-42, -6, my_ll_1);
  //printf("Replace -42 -6 (1) [-2] : %d\n", ret1);
  //test_output(ret1, -2);
  //ret2 = ll_replace(-42, -6, my_ll_2);
  //printf("Replace -42 -6 (2) [-2] : %d\n", ret2);
  //test_output(ret2, -2);
  //ret_empty = ll_replace(-42, -6, my_empty_ll);
  //printf("Replace -42 -6 (empty) [-2] : %d\n", ret_empty);
  //test_output(ret_empty, -2);

  // Clear 0
  ret1 = ll_clear(my_ll_1);
  printf("Clear (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  ret2 = ll_clear(my_ll_2);
  printf("Clear (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  ret_empty = ll_clear(my_empty_ll);
  printf("Clear (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Is Empty 0
  ret1 = ll_is_empty(my_ll_1);
  printf("Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = ll_is_empty(my_ll_2);
  printf("Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = ll_is_empty(my_empty_ll);
  printf("Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Search 0
  ret1 = ll_search(5, my_ll_1);
  printf("Search 5 (1) [-4] : %d\n", ret1);
  test_output(ret1, -4);
  ret2 = ll_search(8, my_ll_2);
  printf("Search 8 (2) [-4] : %d\n", ret2);
  test_output(ret2, -4);
  ret_empty = ll_search(42, my_empty_ll);
  printf("Search 42 (empty) [-4] : %d\n", ret_empty);
  test_output(ret_empty, -4);

  // Printf 0
  printf("Print empty (1) :\n");
  ll_print(my_ll_1);
  printf("Print empty (2) :\n");
  ll_print(my_ll_2);
  printf("Print empty (empty) :\n");
  ll_print(my_empty_ll);

  // Reverse 0
  my_ll_1 = ll_reverse(my_ll_1);
  ret1 = ll_length(my_ll_1);
  printf("Reverse + Length (1) [0] : %d\n", ret1);
  test_output(ret1, 0);
  my_ll_2 = ll_reverse(my_ll_2);
  ret2 = ll_length(my_ll_2);
  printf("Reverse + Length (2) [0] : %d\n", ret2);
  test_output(ret2, 0);
  my_empty_ll = ll_reverse(my_empty_ll);
  ret_empty = ll_length(my_empty_ll);
  printf("Reverse + Length (empty) [0] : %d\n", ret_empty);
  test_output(ret_empty, 0);

  // Clear 0
  ll_clear(my_ll_1);
  ll_clear(my_ll_2);
  ll_clear(my_empty_ll);

  ret1 = ll_is_empty(my_ll_1);
  printf("Clear + Is Empty (1) [1] : %d\n", ret1);
  test_output(ret1, 1);
  ret2 = ll_is_empty(my_ll_2);
  printf("Clear + Is Empty (2) [1] : %d\n", ret2);
  test_output(ret2, 1);
  ret_empty = ll_is_empty(my_empty_ll);
  printf("Clear + Is Empty (empty) [1] : %d\n", ret_empty);
  test_output(ret_empty, 1);

  // Delete
  ll_delete(my_ll_1);
  ll_delete(my_ll_2);
  ll_delete(my_empty_ll);

  printf("###################\n");
  printf("# END EMPTY TESTS #\n");
  printf("###################\n");
}
