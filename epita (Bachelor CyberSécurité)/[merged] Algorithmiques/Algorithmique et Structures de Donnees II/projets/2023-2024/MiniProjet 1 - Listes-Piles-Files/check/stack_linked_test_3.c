#include "stack_linked_test_3.h"

#include <stdio.h>

void stack_linked_test_3(void)
{
  printf("----------------------------\n");
  printf("| STACK LINKED (3) REGULAR |\n");
  printf("----------------------------\n");

  main_stack_linked_regular_tests();
}

void main_stack_linked_regular_tests(void)
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
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) *nothing* : (see above)\n");

  // Push stack (15)
  l2 = push_stack_linked(l1, 15);
  printf("push_stack_linked(l1, 15) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 15' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (36)
  l2 = push_stack_linked(l1, 36);
  printf("push_stack_linked(l1, 36) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 36' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (58)
  l2 = push_stack_linked(l1, 58);
  printf("push_stack_linked(l1, 58) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 58' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (45)
  l2 = push_stack_linked(l1, 45);
  printf("push_stack_linked(l1, 45) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 45' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 45 58 36 15 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [45] : %d\n", ret);
  test_output(ret, 45);
  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  // Pop stack
  l2 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Head not NULL
  printf("test if head not NULL since 'pop' :\n",
  test_diff_address(l1, NULL);

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 58 36 15 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [58] : %d\n", ret);
  test_output(ret, 58);
  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [3] : %d\n", ret);
  test_output(ret, 3);

  // Pop stack
  l2 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [NULL] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 36 15 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [36] : %d\n", ret);
  test_output(ret, 36);
  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [2] : %d\n", ret);
  test_output(ret, 2);

  // Push stack (65)
  l2 = push_stack_linked(l1, 65);
  printf("push_stack_linked(l1, 65) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 65' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (37)
  l2 = push_stack_linked(l1, 37);
  printf("push_stack_linked(l1, 37) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 37' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (13)
  l2 = push_stack_linked(l1, 13);
  printf("push_stack_linked(l1, 13) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 13' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Push stack (82)
  l2 = push_stack_linked(l1, 82);
  printf("push_stack_linked(l1, 82) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'push 82' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 82 13 37 65 36 15 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [82] : %d\n", ret);
  test_output(ret, 82);
  // Is empty
  ret = is_empty_stack_linked(l1);
  printf("is_empty_stack_linked(l1) [0] : %d\n", ret);
  test_output(ret, 0);
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [6] : %d\n", ret);
  test_output(ret, 6);

  // Search list
  ret = search_elt_list_linked(l1, 58);
  printf("search_elt_list_linked(l1, 58) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Search list
  ret = search_elt_list_linked(l1, 82);
  printf("search_elt_list_linked(l1, 82) [1] : %d\n", ret);
  test_output(ret, 1);
  // Search list
  ret = search_elt_list_linked(l1, 15);
  printf("search_elt_list_linked(l1, 15) [6] : %d\n", ret);
  test_output(ret, 6);

  /*
    // Too specific : another two ways of implementing are possible
    // Push = Add_to_pos(1) OR Add_to_pos(len(l))
    // Pop  = Del_pos(1)    OR Del_pos(len(l))

  // Get Elt list (9)
  ret = get_elt_list_linked(l1, 9);
  printf("get_elt_list_linked(l1, 9) [-2] : %d\n", ret);
  test_output(ret, -2);
  // Get Elt list (1)
  ret = get_elt_list_linked(l1, 1);
  printf("get_elt_list_linked(l1, 1) [82] : %d\n", ret);
  test_output(ret, 82);
  // Get Elt list (2)
  ret = get_elt_list_linked(l1, 2);
  printf("get_elt_list_linked(l1, 2) [13] : %d\n", ret);
  test_output(ret, 13);
  // Get Elt list (3)
  ret = get_elt_list_linked(l1, 3);
  printf("get_elt_list_linked(l1, 3) [37] : %d\n", ret);
  test_output(ret, 37);
  // Get Elt list (4)
  ret = get_elt_list_linked(l1, 4);
  printf("get_elt_list_linked(l1, 4) [65] : %d\n", ret);
  test_output(ret, 65);
  // Get Elt list (5)
  ret = get_elt_list_linked(l1, 5);
  printf("get_elt_list_linked(l1, 5) [36] : %d\n", ret);
  test_output(ret, 36);
  // Get Elt list (6)
  ret = get_elt_list_linked(l1, 6);
  printf("get_elt_list_linked(l1, 6) [15] : %d\n", ret);
  test_output(ret, 15);
  // Get Elt list (7)
  ret = get_elt_list_linked(l1, 7);
  printf("get_elt_list_linked(l1, 7) [-2] : %d\n", ret);
  test_output(ret, -2);
  */

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 82 13 37 65 36 15 : (see above)\n");
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [82] : %d\n", ret);
  test_output(ret, 82);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [13] : %d\n", ret);
  test_output(ret, 13);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [37] : %d\n", ret);
  test_output(ret, 37);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [65] : %d\n", ret);
  test_output(ret, 65);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [36] : %d\n", ret);
  test_output(ret, 36);
  // Pop stack
  l2 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l2);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [15] : %d\n", ret);
  test_output(ret, 15);
  // Pop stack
  l2 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [NULL] : %p\n", (void*) l2);
  test_equal_address(l2, NULL);
  // Head changed
  printf("test if head changed since 'pop' :\n%p\n%p\n",
	 (void*) l1, (void*) l2);
  test_diff_address(l1, l2);
  l1 = l2;
  // Get Head stack
  ret = get_head_stack_linked(l1);
  printf("get_head_stack_linked(l1) [-1] : %d\n", ret);
  test_output(ret, -1);


  // Push stack (1337)
  l1 = push_stack_linked(l1, 1337);
  printf("push_stack_linked(l1, 1337) [???] : %p\n", (void*) l1);
  // Push stack (666)
  l1 = push_stack_linked(l1, 666);
  printf("push_stack_linked(l1, 666) [???] : %p\n", (void*) l1);
  // Push stack (4242)
  l1 = push_stack_linked(l1, 4242);
  printf("push_stack_linked(l1, 4242) [???] : %p\n", (void*) l1);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Pop stack
  l1 = pop_stack_linked(l1);
  printf("pop_stack_linked(l1) [???] : %p\n", (void*) l1);
  // Push stack (1515)
  l1 = push_stack_linked(l1, 1515);
  printf("push_stack_linked(l1, 1515) [???] : %p\n", (void*) l1);
  // Push stack (1418)
  l1 = push_stack_linked(l1, 1418);
  printf("push_stack_linked(l1, 1418) [???] : %p\n", (void*) l1);
  // Push stack (3945)
  l1 = push_stack_linked(l1, 3945);
  printf("push_stack_linked(l1, 3945) [???] : %p\n", (void*) l1);

  // Print list
  print_stack_linked(l1);
  printf("print_stack_linked(l1) 3945 1418 1515 1337 : (see above)\n");
  // Length list
  ret = length_stack_linked(l1);
  printf("length_stack_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  // Clear stack
  ret = clear_stack_linked(l1);
  printf("clear_stack_linked(l1) [4] : %d\n", ret);
  test_output(ret, 4);

  l1 = NULL;
  l2 = NULL;
}
