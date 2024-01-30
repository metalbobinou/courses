#include "StrBasics.h"
#include "StrPart1.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|---------------------|\n");
  printf("| LIBSTRING STR-PART1 |\n");
  printf("|---------------------|\n");

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


  // CPY
  char *ptr2 = NULL;

  // strcpy "LALALELELOLOL"
  ptr = calloc(42, sizeof (char));
  //ptr = my_memset(ptr, 0, 42);
  ptr2 = my_strcpy(ptr, str1);
  ret = my_strlen(ptr2);
  printf("strcpy \"LALALELELOLOL\" [13] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 13) && (my_strcmp(ptr2, str1) == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);

  // strcpy "AEIOUYAEIOUY"
  ptr = calloc(42, sizeof (char));
  //ptr = my_memset(ptr, 0, 42);
  ptr2 = my_strcpy(ptr, str2);
  ret = my_strlen(ptr2);
  printf("strcpy \"AEIOUYAEIOUY\" [12] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 12) && (my_strcmp(ptr2, str2) == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);

  // strcpy ""
  ptr = calloc(42, sizeof (char));
  //ptr = my_memset(ptr, 0, 42);
  ptr2 = my_strcpy(ptr, "");
  ret = my_strlen(ptr2);
  printf("strcpy \"\" [0] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 0) && (my_strcmp(ptr2, "") == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);
}
