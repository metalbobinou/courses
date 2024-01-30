#include "StrBasics.h"
#include "StrPart2.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|------------------------------|\n");
  printf("| LIBSTRING STR-PART2 (strstr) |\n");
  printf("|------------------------------|\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  char *ptr = NULL;
  char *t1 = "ababc";
  char *t2 = "abcbc";
  char *t3 = "abababc";
  char *t4 = "abcbcbc";

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // SUBSTR
  //char *t1 = "ababc";
  ptr = my_strstr(t1, "abc");
  printf("strstr(\"%s\", \"%s\") [2] : %lu\n", t1, "abc", ptr - t1);
  if ((ptr - t1) == 2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  //char *t2 = "abcbc";
  ptr = my_strstr(t2, "abc");
  printf("strstr(\"%s\", \"%s\") [0] : %lu\n", t2, "abc", ptr - t2);
  if ((ptr - t2) == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  //char *t3 = "abababc";
  ptr = my_strstr(t3, "abc");
  printf("strstr(\"%s\", \"%s\") [4] : %lu\n", t3, "abc", ptr - t3);
  if ((ptr - t3) == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t4, "abc");
  printf("strstr(\"%s\", \"%s\") [0] : %lu\n", t4, "abc", ptr - t4);
  //char *t4 = "abcbcbc";
  if ((ptr - t4) == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t1 = "ababc";
  ptr = my_strstr(t1, "def");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t1, "def", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t1 = "ababc";
  ptr = my_strstr(t1, "cba");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t1, "cba", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t1, "bca");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t1, "bca", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t2 = "abcbc";
  ptr = my_strstr(t2, "cba");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t2, "cba", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t2, "bca");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t2, "bca", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t3 = "abababc";
  ptr = my_strstr(t3, "cba");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t3, "cba", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t3, "bca");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t3, "bca", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t4 = "abcbcbc";
  ptr = my_strstr(t4, "cba");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t4, "cba", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t4, "bca");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t4, "bca", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
}
