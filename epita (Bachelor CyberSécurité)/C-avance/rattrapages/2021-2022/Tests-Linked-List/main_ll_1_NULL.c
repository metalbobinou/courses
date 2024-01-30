#include "linkedlist.h"

#include "tests_ll.h"

#include <stdio.h>

int main(void)
{
  printf("---------------------\n");
  printf("| QUEUE LINKED LIST |\n");
  printf("---------------------\n");

  main_null_tests();

  return (0);
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void main_null_tests(void)
{
  //my_linkedlist *my_ll = NULL;
  my_linkedlist *ptr = NULL;
  int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Length NULL
  ret = ll_length(NULL);
  printf("Length NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Is Empty NULL
  ret = ll_is_empty(NULL);
  printf("Is empty NULL [-1] : %d\n", ret);
  test_output(ret, -1);


  // Head NULL
  ret = ll_head(NULL);
  printf("Head NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Tail NULL
  ret = ll_tail(NULL);
  printf("Tail NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Get NULL
  ret = ll_get(0, NULL);
  printf("Get 0 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Get Impossible NULL
  //ret = ll_get(5, NULL);
  //printf("Get 5 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);


  // Insert + NULL
  ret = ll_insert(42, 6, NULL);
  printf("Insert 42 6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Insert Neg + NULL
  //ret = ll_insert(-42, 6, NULL);
  //printf("Insert -42 6 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);

  // Insert - NULL
  ret = ll_insert(42, -6, NULL);
  printf("Insert 42 -6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Insert Neg - NULL
  //ret = ll_insert(-42, -6, NULL);
  //printf("Insert -42 -6 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);

  // Replace + NULL
  ret = ll_replace(42, 6, NULL);
  printf("Replace 42 6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Replace Neg + NULL
  //ret = ll_replace(-42, 6, NULL);
  //printf("Replace -42 6 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);

  // Replace - NULL
  ret = ll_replace(42, -6, NULL);
  printf("Replace 42 -6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Replace Neg - NULL
  //ret = ll_replace(-42, -6, NULL);
  //printf("Replace -42 -6 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);


  // Remove NULL
  ret = ll_remove(0, NULL);
  printf("Remove 0 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Remove Impossible NULL
  //ret = ll_remove(5, NULL);
  //printf("Remove 5 NULL [-1] : %d\n", ret);
  //test_output(ret, -1);


  // Clear NULL
  ret = ll_clear(NULL);
  printf("Clear NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Search 42 NULL
  ret = ll_search(42, NULL);
  printf("Search 42 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Reverse NULL
  ptr = ll_reverse(NULL);
  printf("Reverse NULL [(nil) / 0] : %p\n", (void *) ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  printf("Print NULL :\n");
  ll_print(NULL);

  printf("##################\n");
  printf("# END NULL TESTS #\n");
  printf("##################\n");
}
