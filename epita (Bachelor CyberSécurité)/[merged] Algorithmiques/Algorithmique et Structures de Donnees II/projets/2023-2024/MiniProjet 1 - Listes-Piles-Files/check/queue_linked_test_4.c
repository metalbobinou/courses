#include "queue_linked_test_4.h"

#include <stdio.h>

void queue_linked_test_4(void)
{
  printf("-------------------------\n");
  printf("| QUEUE LINKED (4) LONG |\n");
  printf("-------------------------\n");

  main_queue_linked_long_tests();
}

void main_queue_linked_long_tests(void)
{
  list_linked *l1, *l2;
  int ret;

  //printf("##############\n");
  //printf("# LONG TESTS #\n");
  //printf("##############\n");

  l1 = NULL;
  l2 = NULL;

  // Is empty
  ret = is_empty_list_linked(l1);
  printf("is_empty_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Is empty
  ret = is_empty_list_linked(l2);
  printf("is_empty_queue_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  for (int i = 0; i < 4000; i++)
    l1 = enqueue_queue_linked(l1, 42);
  for (int i = 0; i < 4000; i++)
    l2 = enqueue_queue_linked(l2, 1);

  for (int i = 0; i < 2000; i++)
    l1 = dequeue_queue_linked(l1);
  for (int i = 0; i < 2000; i++)
    l2 = dequeue_queue_linked(l2);

  for (int i = 0; i < 1000; i++)
    l1 = enqueue_queue_linked(l1, 1337);
  for (int i = 0; i < 1000; i++)
    l2 = enqueue_queue_linked(l2, 2);

  for (int i = 0; i < 2999; i++)
    l1 = dequeue_queue_linked(l1);
  for (int i = 0; i < 2999; i++)
    l2 = dequeue_queue_linked(l2);

  // Print queue
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 1337 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [1337] : %d\n", ret);
  test_output(ret, 1337);

  // Print queue
  print_queue_linked(l2);
  printf("print_queue_linked(l2) 2 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l2);
  printf("get_head_queue_linked(l2) [2] : %d\n", ret);
  test_output(ret, 2);

  // Clear queue
  ret = clear_queue_linked(l1);
  printf("clear_queue_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  ret = clear_queue_linked(l2);
  printf("clear_queue_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
