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

// Main for calling tests on each structure
int main(void)
{
  list_tests();

  return (0);
}
