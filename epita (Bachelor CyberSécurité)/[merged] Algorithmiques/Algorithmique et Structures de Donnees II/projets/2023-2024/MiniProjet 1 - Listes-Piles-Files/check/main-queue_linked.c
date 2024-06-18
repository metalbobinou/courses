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
  queue_tests();

  return (0);
}
