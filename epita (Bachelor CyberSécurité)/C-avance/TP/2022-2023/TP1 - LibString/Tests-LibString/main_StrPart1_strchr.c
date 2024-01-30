#include "StrBasics.h"
#include "StrPart1.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|------------------------------|\n");
  printf("| LIBSTRING STR-PART1 (strchr) |\n");
  printf("|------------------------------|\n");

  main_regular_tests();

  return (0);
}

/*
** void *my_memset(void *s, int c, size_t n)
** {
**   for (int i = 0; i < n; i++)
**     s[i] = (char) c;
**   return (s);
** }
*/

void main_regular_tests(void)
{
  char *ptr = NULL;
  char *str1 = "LALALELELOLOL";
  char str2[] = "AEIOUYAEIOUY";
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // CHR

  // strchr "LALALELELOLOL" "Z"
  ptr = my_strchr(str1, 'Z');
  printf("strchr \"LALALELELOLOL\" 'Z' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "LALALELELOLOL" "a"
  ptr = my_strchr(str1, 'a');
  printf("strchr \"LALALELELOLOL\" 'a' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "LALALELELOLOL" "A"
  ptr = my_strchr(str1, 'A');
  ret = ptr - str1;
  printf("strchr \"LALALELELOLOL\" 'A' [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "LALALELELOLOL" "E"
  ptr = my_strchr(str1, 'E');
  ret = ptr - str1;
  printf("strchr \"LALALELELOLOL\" 'E' [5] : %d\n", ret);
  if (ret == 5)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "LALALELELOLOL" "O"
  ptr = my_strchr(str1, 'O');
  ret = ptr - str1;
  printf("strchr \"LALALELELOLOL\" 'O' [9] : %d\n", ret);
  if (ret == 9)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "LALALELELOLOL" "L"
  ptr = my_strchr(str1, 'L');
  ret = ptr - str1;
  printf("strchr \"LALALELELOLOL\" 'L' [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");



  // strchr "AEIOUYAEIOUY" "Z"
  ptr = my_strchr(str2, 'Z');
  printf("strchr \"AEIOUYAEIOUY\" 'Z' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "AEIOUYAEIOUY" "a"
  ptr = my_strchr(str2, 'a');
  printf("strchr \"AEIOUYAEIOUY\" 'a' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "AEIOUYAEIOUY" "A"
  ptr = my_strchr(str2, 'A');
  ret = ptr - str2;
  printf("strchr \"AEIOUYAEIOUY\" 'A' [0] : %d\n", ret);
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "AEIOUYAEIOUY" "E"
  ptr = my_strchr(str2, 'E');
  ret = ptr - str2;
  printf("strchr \"AEIOUYAEIOUY\" 'E' [1] : %d\n", ret);
  if (ret == 1)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "AEIOUYAEIOUY" "O"
  ptr = my_strchr(str2, 'O');
  ret = ptr - str2;
  printf("strchr \"AEIOUYAEIOUY\" 'O' [3] : %d\n", ret);
  if (ret == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strchr "AEIOUYAEIOUY" "Y"
  ptr = my_strchr(str2, 'Y');
  ret = ptr - str2;
  printf("strchr \"AEIOUYAEIOUY\" 'Y' [5] : %d\n", ret);
  if (ret == 5)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
