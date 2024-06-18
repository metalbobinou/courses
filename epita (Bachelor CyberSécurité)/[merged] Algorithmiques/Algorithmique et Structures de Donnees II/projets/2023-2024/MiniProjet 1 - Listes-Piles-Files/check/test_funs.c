#include "test_funs.h"

#include <stdio.h>

void test_equal_address(void *ptr, void *expected_result)
{
  if (ptr == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void test_diff_address(void *ptr, void *expected_result)
{
  if (ptr != expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}

void test_output(int var, int expected_result)
{
  if (var == expected_result)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
