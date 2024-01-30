#include "StrBasics.h"

#include <stdlib.h>
#include <stdio.h>

void main_null_tests(void);
void main_regular_tests(void);

int main(void)
{
  printf("|-------------------------------|\n");
  printf("| LIBSTRING STR-BASICS (strcmp) |\n");
  printf("|-------------------------------|\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  char *str1 = "ABCD";
  char str2[5] = "EFGH";
  char str1_bis[] = "ABCD";
  char *str2_bis = "EFGH";
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // CMP

  // Cmp "ABCD" char* str1
  ret = my_strcmp(str1, str1);
  printf("strcmp (char* \"ABCD\", str1) [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "ABCD" char* str1_bis
  ret = my_strcmp(str1, str1_bis);
  printf("strcmp (char* \"ABCD\", char[] \"ABCD\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "ABCD" char* "ABCD"
  ret = my_strcmp(str1, "ABCD");
  printf("strcmp (char* \"ABCD\", \"ABCD\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp str1_bis "ABCD" char*
  ret = my_strcmp(str1_bis, str1);
  printf("strcmp (char[] \"ABCD\", char* \"ABCD\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "ABCD" "ABCD" char*
  ret = my_strcmp("ABCD", str1);
  printf("strcmp (\"ABCD\", char *\"ABCD\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");


  // Cmp "EFGH" char[] str2
  ret = my_strcmp(str2, str2);
  printf("strcmp (char[] \"EFGH\", str2) [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "EFGH" char[] str2_bis
  ret = my_strcmp(str2, str2_bis);
  printf("strcmp (char[] \"EFGH\", char* \"EFGH\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "EFGH" char[] "EFGH"
  ret = my_strcmp(str2, "EFGH");
  printf("strcmp (char[] \"EFGH\", \"EFGH\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp str2_bis "EFGH" char[]
  ret = my_strcmp(str2_bis, str2);
  printf("strcmp (char* \"EFGH\", char[] \"EFGH\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "EFGH" "EFGH" char[]
  ret = my_strcmp("EFGH", str2);
  printf("strcmp (\"EFGH\", char[] \"EFGH\") [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");


  // Cmp "ABCD" char* "EFGH" char[]
  ret = my_strcmp(str1, str2);
  printf("strcmp (char* \"ABCD\", char [] \"EFGH\") [-4] : %d\n", ret);
  if (ret == -4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "EFGH" char[] "ABCD" char*
  ret = my_strcmp(str2, str1);
  printf("strcmp (char [] \"EFGH\", char* \"ABCD\") [4] : %d\n", ret);
  if (ret == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");


  // Cmp "ABCDE" "ABCDG"
  ret = my_strcmp("ABCDE", "ABCDG");
  printf("strcmp (\"ABCDE\", \"ABCDG\") [-2] : %d\n", ret);
  if (ret == -2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // Cmp "ABCDG" "ABCDE"
  ret = my_strcmp("ABCDG", "ABCDE");
  printf("strcmp (\"ABCDG\", \"ABCDE\") [2] : %d\n", ret);
  if (ret == 2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
