#include "StrBasics.h"
#include "StrPart1.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|------------------------------|\n");
  printf("| LIBSTRING STR-PART1 (strcpy) |\n");
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
