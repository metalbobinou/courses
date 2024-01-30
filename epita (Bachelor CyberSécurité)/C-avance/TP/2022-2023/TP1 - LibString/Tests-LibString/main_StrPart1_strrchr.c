#include "StrBasics.h"
#include "StrPart1.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|-------------------------------|\n");
  printf("| LIBSTRING STR-PART1 (strrchr) |\n");
  printf("|-------------------------------|\n");

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

  // RCHR

  // strrchr "LALALELELOLOL" "Z"
  ptr = my_strrchr(str1, 'Z');
  printf("strrchr \"LALALELELOLOL\" 'Z' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "LALALELELOLOL" "a"
  ptr = my_strrchr(str1, 'a');
  printf("strrchr \"LALALELELOLOL\" 'a' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "LALALELELOLOL" "A"
  ptr = my_strrchr(str1, 'A');
  ret = ptr - str1;
  printf("strrchr \"LALALELELOLOL\" 'A' [3] : %d\n", ret);
  if (ret == 3)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "LALALELELOLOL" "E"
  ptr = my_strrchr(str1, 'E');
  ret = ptr - str1;
  printf("strrchr \"LALALELELOLOL\" 'E' [7] : %d\n", ret);
  if (ret == 7)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "LALALELELOLOL" "O"
  ptr = my_strrchr(str1, 'O');
  ret = ptr - str1;
  printf("strrchr \"LALALELELOLOL\" 'O' [11] : %d\n", ret);
  if (ret == 11)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "LALALELELOLOL" "L"
  ptr = my_strrchr(str1, 'L');
  ret = ptr - str1;
  printf("strrchr \"LALALELELOLOL\" 'L' [12] : %d\n", ret);
  if (ret == 12)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");



  // strrchr "AEIOUYAEIOUY" "Z"
  ptr = my_strrchr(str2, 'Z');
  printf("strrchr \"AEIOUYAEIOUY\" 'Z' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "AEIOUYAEIOUY" "a"
  ptr = my_strrchr(str2, 'a');
  printf("strrchr \"AEIOUYAEIOUY\" 'a' [(null)] : %p\n", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "AEIOUYAEIOUY" "A"
  ptr = my_strrchr(str2, 'A');
  ret = ptr - str2;
  printf("strrchr \"AEIOUYAEIOUY\" 'A' [6] : %d\n", ret);
  if (ret == 6)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "AEIOUYAEIOUY" "E"
  ptr = my_strrchr(str2, 'E');
  ret = ptr - str2;
  printf("strrchr \"AEIOUYAEIOUY\" 'E' [7] : %d\n", ret);
  if (ret == 7)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "AEIOUYAEIOUY" "O"
  ptr = my_strrchr(str2, 'O');
  ret = ptr - str2;
  printf("strrchr \"AEIOUYAEIOUY\" 'O' [9] : %d\n", ret);
  if (ret == 9)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  // strrchr "AEIOUYAEIOUY" "Y"
  ptr = my_strrchr(str2, 'Y');
  ret = ptr - str2;
  printf("strrchr \"AEIOUYAEIOUY\" 'Y' [11] : %d\n", ret);
  if (ret == 11)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
