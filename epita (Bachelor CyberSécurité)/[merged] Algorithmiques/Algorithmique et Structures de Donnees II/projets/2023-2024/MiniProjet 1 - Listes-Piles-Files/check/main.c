// List tests
#include "list_linked_test_1.h"
#include "list_linked_test_2.h"
#include "list_linked_test_3.h"
#include "list_linked_test_4.h"

void list_tests(void)
{
  list_linked_test_1();
  list_linked_test_2();
  list_linked_test_3();
  list_linked_test_4();
}

// Stack tests
#include "stack_linked_test_1.h"
#include "stack_linked_test_2.h"
#include "stack_linked_test_3.h"
#include "stack_linked_test_4.h"

void stack_tests(void)
{
  stack_linked_test_1();
  stack_linked_test_2();
  stack_linked_test_3();
  stack_linked_test_4();
}

// Queue tests
#include "queue_linked_test_1.h"
#include "queue_linked_test_2.h"
#include "queue_linked_test_3.h"
#include "queue_linked_test_4.h"

void queue_tests(void)
{
  queue_linked_test_1();
  queue_linked_test_2();
  queue_linked_test_3();
  queue_linked_test_4();
}

// Main for calling tests on each structure
int main(void)
{
  list_tests();
  stack_tests();
  queue_tests();

  return (0);
}
