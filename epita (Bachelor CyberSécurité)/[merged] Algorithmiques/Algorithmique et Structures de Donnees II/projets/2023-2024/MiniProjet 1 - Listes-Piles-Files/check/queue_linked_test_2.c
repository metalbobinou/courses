#include "queue_linked_test_2.h"

#include <stdio.h>

void queue_linked_test_2(void)
{
  printf("----------------------------\n");
  printf("| QUEUE LINKED (2) ONE ELT |\n");
  printf("----------------------------\n");

  main_queue_linked_one_elt_tests();
}

void main_queue_linked_one_elt_tests(void)
{
  list_linked *l1, *l2;
  //list_linked *ptr;
  int ret;

  //printf("##############\n");
  //printf("# NULL TESTS #\n");
  //printf("##############\n");

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) *nothing* : (see above)\n");

  // Enqueue queue (42)
  l2 = enqueue_queue_linked(l1, 42);
  printf("enqueue_queue_linked(l1, 42) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'enqueue 42' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [42] : %d\n", ret);
  test_output(ret, 42);

  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 42 : (see above)\n");

  // Dequeue queue
  l2 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [NULL] : %p\n", (void*) l2);
  test_equal_address(l2, NULL);
  // Head changed
  printf("test if head changed since 'dequeue' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [-1] : %d\n", ret);
  test_output(ret, -1);

  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) *nothing* : (see above)\n");

  // Enqueue queue (1337)
  l2 = enqueue_queue_linked(l1, 1337);
  printf("enqueue_queue_linked(l1, 1337) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'enqueue 1337' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [1337] : %d\n", ret);
  test_output(ret, 1337);

  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 1337 : (see above)\n");

  // Clear queue
  ret = clear_queue_linked(l1);
  printf("clear_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
