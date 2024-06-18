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

// Main for calling tests on each structure
int main(void)
{
  stack_tests();

  return (0);
}
