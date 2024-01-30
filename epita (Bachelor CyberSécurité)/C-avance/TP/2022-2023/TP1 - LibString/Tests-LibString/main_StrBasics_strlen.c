#include "StrBasics.h"

#include <stdlib.h>
#include <stdio.h>

void main_null_tests(void);
void main_regular_tests(void);

int main(void)
{
  printf("|-------------------------------|\n");
  printf("| LIBSTRING STR-BASICS (strlen) |\n");
  printf("|-------------------------------|\n");

  main_null_tests();
  main_regular_tests();

  return (0);
}

void main_null_tests(void)
{
  //char *ptr = NULL;
  int ret;

  printf("##############\n");
  printf("# NULL TESTS #\n");
  printf("##############\n");

  // Length NULL
  ret = my_strlen(NULL);
  printf("strlen NULL [-1] : %d\n", ret);
  if (ret == -1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}


void main_regular_tests(void)
{
  char *str1 = "ABCD";
  char str2[5] = "EFGH";
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // LEN

  // Length "ABCD" char*
  ret = my_strlen(str1);
  printf("strlen char* \"ABCD\" [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Length "EFGH" char[]
  ret = my_strlen(str2);
  printf("strlen char[] \"EFGH\" [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
