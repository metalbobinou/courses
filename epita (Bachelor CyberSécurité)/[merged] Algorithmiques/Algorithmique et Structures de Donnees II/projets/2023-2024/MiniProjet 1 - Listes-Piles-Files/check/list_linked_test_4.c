#include "list_linked_test_4.h"

#include <stdio.h>

void list_linked_test_4(void)
{
  printf("------------------------\n");
  printf("| LIST LINKED (4) LONG |\n");
  printf("------------------------\n");

  main_list_linked_long_tests();
}

void main_list_linked_long_tests(void)
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
  printf("is_empty_list_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  // Is empty
  ret = is_empty_list_linked(l2);
  printf("is_empty_stack_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  for (int i = 0; i < 4000; i++)
    l1 = add_elt_list_linked(l1, 42, 1);
  for (int i = 0; i < 4000; i++)
    l2 = add_elt_list_linked(l2, 1, 1);

  for (int i = 0; i < 2000; i++)
    l1 = del_elt_list_linked(l1, 1);
  for (int i = 0; i < 2000; i++)
    l2 = del_elt_list_linked(l2, 1);

  for (int i = 0; i < 1000; i++)
    l1 = add_elt_list_linked(l1, 1337, 1);
  for (int i = 0; i < 1000; i++)
    l2 = add_elt_list_linked(l2, 2, 1);

  for (int i = 0; i < 2999; i++)
    l1 = del_elt_list_linked(l1, 1);
  for (int i = 0; i < 2999; i++)
    l2 = del_elt_list_linked(l2, 1);

  // Print list
  print_list_linked(l1);
  printf("print_list_linked(l1) 42 : (see above)\n");
  // Get Elt list (42)
  ret = get_elt_list_linked(l1, 1);
  printf("get_elt_list_linked(l1, 1) [42] : %d\n", ret);
  test_output(ret, 42);

  // Print list
  print_list_linked(l2);
  printf("print_list_linked(l2) 1 : (see above)\n");
  // Get Elt list (1)
  ret = get_elt_list_linked(l2, 1);
  printf("get_elt_list_linked(l2, 1) [1] : %d\n", ret);
  test_output(ret, 1);

  // Clear list
  ret = clear_list_linked(l1);
  printf("clear_list_linked(l1) [1] : %d\n", ret);
  test_output(ret, 1);
  ret = clear_list_linked(l2);
  printf("clear_list_linked(l2) [1] : %d\n", ret);
  test_output(ret, 1);

  l1 = NULL;
  l2 = NULL;
}
