#include "queue_linked_test_3.h"

#include <stdio.h>

void queue_linked_test_3(void)
{
  printf("----------------------------\n");
  printf("| QUEUE LINKED (3) REGULAR |\n");
  printf("----------------------------\n");

  main_queue_linked_regular_tests();
}

void main_queue_linked_regular_tests(void)
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

  // Enqueue queue (15)
  l2 = enqueue_queue_linked(l1, 15);
  printf("enqueue_queue_linked(l1, 15) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'enqueue 15' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Enqueue queue (36)
  l2 = enqueue_queue_linked(l1, 36);
  printf("enqueue_queue_linked(l1, 36) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 36' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Enqueue queue (58)
  l2 = enqueue_queue_linked(l1, 58);
  printf("enqueue_queue_linked(l1, 58) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 58' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Enqueue queue (45)
  l2 = enqueue_queue_linked(l1, 45);
  printf("enqueue_queue_linked(l1, 45) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 45' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 15 36 58 45 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [15] : %d\n", ret);
  test_output(ret, 15);
  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  // Dequeue queue
  l2 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [NULL] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'dequeue' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 36 58 45 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [36] : %d\n", ret);
  test_output(ret, 36);
  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [3] : %d\n", ret);
  test_output(ret, 3);

  // Dequeue queue
  l2 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [NULL] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'dequeue' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 58 45 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [58] : %d\n", ret);
  test_output(ret, 58);
  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [2] : %d\n", ret);
  test_output(ret, 2);

  // Enqueue queue (65)
  l2 = enqueue_queue_linked(l1, 65);
  printf("enqueue_queue_linked(l1, 65) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 65' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Enqueue queue (37)
  l2 = enqueue_queue_linked(l1, 37);
  printf("enqueue_queue_linked(l1, 37) [???] : %p\n", (void*) l2);
  // Head shouldn'tchanged
  printf("test if head changed since 'enqueue 37' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Enqueue queue (13)
  l2 = enqueue_queue_linked(l1, 13);
  printf("enqueue_queue_linked(l1, 13) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 13' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Enqueue queue (82)
  l2 = enqueue_queue_linked(l1, 82);
  printf("enqueue_queue_linked(l1, 82) [???] : %p\n", (void*) l2);
  // Head shouldn't changed
  printf("test if head changed since 'enqueue 82' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_equal_address(l1, l2);
  l1 = l2;

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 58 45 65 37 13 82 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [58] : %d\n", ret);
  test_output(ret, 58);
  // Is empty
  ret = is_empty_queue_linked(l1);
  printf("is_empty_queue_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [6] : %d\n", ret);
  test_output(ret, 6);

  // Search list
  ret = search_elt_list_linked(l1, 15);
  printf("search_elt_list_linked(l1, 15) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Search list
  ret = search_elt_list_linked(l1, 82);
  printf("search_elt_list_linked(l1, 82) [6] : %d\n", ret);
  test_output(ret, 6);
  // Search list
  ret = search_elt_list_linked(l1, 58);
  printf("search_elt_list_linked(l1, 58) [1] : %d\n", ret);
  test_output(ret, 1);

  /*
    // Too specific : another two ways of implementing are possible
    // Enqueue = Add_to_pos(1)   OR Add_to_pos(len(l))
    // Dequeue = Del_pos(len(l)) OR Del_pos(1)

  // Get Elt list (9)
  ret = get_elt_list_linked(l1, 9);
  printf("get_elt_list_linked(l1, 9) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Get Elt list (1)
  ret = get_elt_list_linked(l1, 1);
  printf("get_elt_list_linked(l1, 1) [58] : %d\n", ret);
  test_output(ret, 58);
  // Get Elt list (2)
  ret = get_elt_list_linked(l1, 2);
  printf("get_elt_list_linked(l1, 2) [45] : %d\n", ret);
  test_output(ret, 45);
  // Get Elt list (3)
  ret = get_elt_list_linked(l1, 3);
  printf("get_elt_list_linked(l1, 3) [65] : %d\n", ret);
  test_output(ret, 65);
  // Get Elt list (4)
  ret = get_elt_list_linked(l1, 4);
  printf("get_elt_list_linked(l1, 4) [37] : %d\n", ret);
  test_output(ret, 37);
  // Get Elt list (5)
  ret = get_elt_list_linked(l1, 5);
  printf("get_elt_list_linked(l1, 5) [13] : %d\n", ret);
  test_output(ret, 13);
  // Get Elt list (6)
  ret = get_elt_list_linked(l1, 6);
  printf("get_elt_list_linked(l1, 6) [82] : %d\n", ret);
  test_output(ret, 82);
  // Get Elt list (7)
  ret = get_elt_list_linked(l1, 7);
  printf("get_elt_list_linked(l1, 7) [-2] : %d\n", ret);
  test_output(ret, -2);
  */

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 58 45 65 37 13 82 : (see above)\n");
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [58] : %d\n", ret);
  test_output(ret, 58);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [45] : %d\n", ret);
  test_output(ret, 45);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [65] : %d\n", ret);
  test_output(ret, 65);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [37] : %d\n", ret);
  test_output(ret, 37);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [13] : %d\n", ret);
  test_output(ret, 13);
  // Dequeue queue
  l2 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'dequeue' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Get Head queue
  ret = get_head_queue_linked(l1);
  printf("get_head_queue_linked(l1) [82] : %d\n", ret);
  test_output(ret, 82);
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


  // Enqueue queue (1337)
  l1 = enqueue_queue_linked(l1, 1337);
  printf("enqueue_queue_linked(l1, 1337) [???] : %p\n", (void*) l1);
  // Enqueue queue (666)
  l1 = enqueue_queue_linked(l1, 666);
  printf("enqueue_queue_linked(l1, 666) [???] : %p\n", (void*) l1);
  // Enqueue queue (4242)
  l1 = enqueue_queue_linked(l1, 4242);
  printf("enqueue_queue_linked(l1, 4242) [???] : %p\n", (void*) l1);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Dequeue queue
  l1 = dequeue_queue_linked(l1);
  printf("dequeue_queue_linked(l1) [???] : %p\n", (void*) l1);
  // Enqueue queue (1515)
  l1 = enqueue_queue_linked(l1, 1515);
  printf("enqueue_queue_linked(l1, 1515) [???] : %p\n", (void*) l1);
  // Enqueue queue (1418)
  l1 = enqueue_queue_linked(l1, 1418);
  printf("enqueue_queue_linked(l1, 1418) [???] : %p\n", (void*) l1);
  // Enqueue queue (3945)
  l1 = enqueue_queue_linked(l1, 3945);
  printf("enqueue_queue_linked(l1, 3945) [???] : %p\n", (void*) l1);

  // Print list
  print_queue_linked(l1);
  printf("print_queue_linked(l1) 4242 1515 1418 3945 : (see above)\n");
  // Length list
  ret = length_queue_linked(l1);
  printf("length_queue_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  // Clear queue
  ret = clear_queue_linked(l1);
  printf("clear_queue_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  l1 = NULL;
  l2 = NULL;
}
