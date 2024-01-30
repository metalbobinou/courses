#include "queues.h"

#include "tests_array.h"

#include <stdio.h>

int main(void)
{
  printf("---------------\n");
  printf("| QUEUE ARRAY |\n");
  printf("---------------\n");

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
  //queue_array *my_queue = NULL;
  queue_array *ptr = NULL;
  int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Length NULL
  ret = queue_array_length(NULL);
  printf("Length NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Max Length NULL
  ret = queue_array_max_length(NULL);
  printf("Max Length NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Is Empty NULL
  ret = queue_array_is_empty(NULL);
  printf("Is empty NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Enqueue 42 NULL
  ret = queue_array_enqueue(42, NULL);
  printf("Enqueue 42 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Dequeue NULL
  ret = queue_array_dequeue(NULL);
  printf("Dequeue NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Head NULL
  ret = queue_array_head(NULL);
  printf("Head NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Tail NULL
  ret = queue_array_tail(NULL);
  printf("Tail NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Insert + NULL
  ret = queue_array_insert(42, 6, NULL);
  printf("Insert 42 6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Insert - NULL
  ret = queue_array_insert(42, -6, NULL);
  printf("Insert 42 -6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Replace + NULL
  ret = queue_array_replace(42, 6, NULL);
  printf("Replace 42 6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Replace - NULL
  ret = queue_array_replace(42, -6, NULL);
  printf("Replace 42 -6 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Add negative value "elt" tests

  // Clear NULL
  ret = queue_array_clear(NULL);
  printf("Clear NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Search 42 NULL
  ret = queue_array_search(42, NULL);
  printf("Search 42 NULL [-1] : %d\n", ret);
  test_output(ret, -1);

  // Reverse NULL
  ptr = queue_array_reverse(NULL);
  printf("Reverse NULL [(nil) / 0] : %p\n", (void *) ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  printf("Print NULL :\n");
  queue_array_print(NULL);

  printf("##################\n");
  printf("# END NULL TESTS #\n");
  printf("##################\n");
}
