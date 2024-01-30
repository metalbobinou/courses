#include "StrBasics.h"

#include <stdlib.h>
#include <stdio.h>

void main_null_tests(void);
void main_regular_tests(void);

int main(void)
{
  printf("|-------------------------------|\n");
  printf("| LIBSTRING STR-BASICS (strdup) |\n");
  printf("|-------------------------------|\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  char *ptr = NULL;
  char *str1 = "ABCD";
  char str2[5] = "EFGH";
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // DUP

  // Dup "ABCD" char*
  ptr = my_strdup(str1);
  ret = 0;
  while ((str1[ret] != '\0') && (ptr[ret] == str1[ret]))
    ret++;
  free(ptr);
  printf("strdup char* \"ABCD\" [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Dup "EFGH" char[]
  ptr = my_strdup(str2);
  ret = 0;
  while ((str2[ret] != '\0') && (ptr[ret] == str2[ret]))
    ret++;
  free(ptr);
  printf("strdup char[] \"EFGH\" [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
