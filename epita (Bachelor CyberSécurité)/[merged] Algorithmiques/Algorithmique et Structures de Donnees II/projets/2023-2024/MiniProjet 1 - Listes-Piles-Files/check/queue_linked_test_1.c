#include "queue_linked_test_1.h"

#include <stdio.h>

void queue_linked_test_1(void)
{
  printf("--------------------------\n");
  printf("| QUEUE LINKED (1) EMPTY |\n");
  printf("--------------------------\n");

  main_queue_linked_null_tests();
}

void main_queue_linked_null_tests(void)
{
  list_linked *ptr;
  int ret;

  //printf("##############\n");
  //printf("# NULL TESTS #\n");
  //printf("##############\n");

  // Is empty
  ret = is_empty_queue_linked(NULL);
  printf("is_empty_queue_linked(NULL) [1] : %d\n", ret);
  test_output(ret, 1);

  // Length list
  ret = length_queue_linked(NULL);
  printf("length_queue_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);

  // Print list
  print_queue_linked(NULL);
  printf("print_queue_linked(NULL) *nothing* : (see above)\n");

  // Dequeue queue (1)
  ptr = dequeue_queue_linked(NULL);
  printf("dequeue_queue_linked(NULL) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Dequeue queue (2)
  ptr = dequeue_queue_linked(NULL);
  printf("dequeue_queue_linked(NULL) [NULL] : %p\n", (void*) ptr);
  test_equal_address(ptr, NULL);

  // Get Head queue
  ret = get_head_queue_linked(NULL);
  printf("get_head_queue_linked(NULL) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Clear queue
  ret = clear_queue_linked(NULL);
  printf("clear_queue_linked(NULL) [0] : %d\n", ret);
  test_output(ret, 0);
}
