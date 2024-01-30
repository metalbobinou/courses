#include "StrBasics.h"
#include "StrPart2.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|---------------------|\n");
  printf("| LIBSTRING STR-PART2 |\n");
  printf("|---------------------|\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  char *ptr = NULL;
  char *ptr2 = NULL;
  char *str1_1 = "ABCD";
  char *str2_1 = "EFGH";
  char str1_2[] = "ABCD";
  //char str2_2[] = "EFGH";
  char *empty = "";
  char **dptr = NULL;
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // CAT

  // strcat "ABCD" "EFGH" char*
  ptr = calloc(42, sizeof (char));
  ptr[0] = 'A';
  ptr[1] = 'B';
  ptr[2] = 'C';
  ptr[3] = 'D';
  ptr2 = my_strcat(ptr, str2_1);
  ret = my_strlen(ptr2);
  printf("strcat \"ABCD\" + \"EFGH\" [8] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 8) && (my_strcmp(ptr2, "ABCDEFGH") == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);

  // strcat "EFGH" "ABCD" char[]
  ptr = calloc(42, sizeof (char));
  ptr[0] = 'E';
  ptr[1] = 'F';
  ptr[2] = 'G';
  ptr[3] = 'H';
  ptr2 = my_strcat(ptr, str1_2);
  ret = my_strlen(ptr2);
  printf("strcat \"EFGH\" + \"ABCD\" [8] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 8) && (my_strcmp(ptr2, "EFGHABCD") == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);

  // strcat "ABCD" ""
  ptr = calloc(42, sizeof (char));
  ptr[0] = 'A';
  ptr[1] = 'B';
  ptr[2] = 'C';
  ptr[3] = 'D';
  ptr2 = my_strcat(ptr, empty);
  ret = my_strlen(ptr2);
  printf("strcat \"ABCD\" + \"\" [4] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 4) && (my_strcmp(ptr2, "ABCD") == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);

  // strcat "" "ABCD"
  ptr = calloc(42, sizeof (char));
  ptr2 = my_strcat(ptr, str1_1);
  ret = my_strlen(ptr2);
  printf("strcat \"\" + \"ABCD\" [4] : \"%s\" [%d]\n", ptr2, ret);
  if ((ptr == ptr2) && (ret == 4) && (my_strcmp(ptr2, "ABCD") == 0))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(ptr);


  // TOK
  char *t_strNULL = NULL;
  dptr = my_strtok_simple(t_strNULL, ' ');
  printf("strtok(NULL, ' ') [NULL] : %p\n", (void *) dptr);
  if (dptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  char *t_strEmpty = "";
  dptr = my_strtok_simple(t_strEmpty, ' ');
  printf("strtok (\"\", ' ') [@] [NULL] : %p %p\n",
	 (void *) dptr,
	 (void *) dptr[0]);
  if ((dptr != NULL) && (dptr[0] == NULL))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(dptr);

  char *t_str0 = "ABCD";
  dptr = my_strtok_simple(t_str0, ' ');
  printf("strtok (\"%s\", ' ')\n", t_str0);
  printf("  [0] ABCD : %s\n", dptr[0]);
  ret = my_strcmp(dptr[0], "ABCD");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  printf("  [1] (NULL) : %p\n", dptr[1]);
  if (dptr[1] == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(dptr[0]);
  free(dptr);

  char *t_str1 = "LALA LELE LILI LOLO LULU LYLY";
  dptr = my_strtok_simple(t_str1, ' ');
  printf("strtok (\"%s\", ' ')\n", t_str1);
  ptr = dptr[0];
  printf("  [0] LALA : %s\n", ptr);
  ret = my_strcmp(ptr, "LALA");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[1];
  printf("  [1] LELE : %s\n", ptr);
  ret = my_strcmp(ptr, "LELE");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[2];
  printf("  [2] LILI : %s\n", ptr);
  ret = my_strcmp(ptr, "LILI");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[3];
  printf("  [3] LOLO : %s\n", ptr);
  ret = my_strcmp(ptr, "LOLO");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[4];
  printf("  [4] LULU : %s\n", ptr);
  ret = my_strcmp(ptr, "LULU");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[5];
  printf("  [5] LYLY : %s\n", ptr);
  ret = my_strcmp(ptr, "LYLY");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  printf("  [6] (NULL) : %p\n", dptr[6]);
  if (dptr[6] == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  for (int i = 0; i < 7; i++)
    free(dptr[i]);
  free(dptr);


  char t_str2[] = "TATA , TETE , TITI , TOTO , TUTU , TYTY";
  dptr = my_strtok_simple(t_str2, ',');
  printf("strtok (\"%s\", ',')\n", t_str1);
  ptr = dptr[0];
  ret = my_strcmp(ptr, "TATA ");
  printf("\"TATA \" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[1];
  ret = my_strcmp(ptr, " TETE ");
  printf("\" TETE \" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[2];
  ret = my_strcmp(ptr, " TITI ");
  printf("\" TITI \" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[3];
  ret = my_strcmp(ptr, " TOTO ");
  printf("\" TOTO \" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[4];
  ret = my_strcmp(ptr, " TUTU ");
  printf("\" TUTU \" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = dptr[5];
  ret = my_strcmp(ptr, " TYTY");
  printf("\" TYTY\" :\n");
  if (ret == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  if (dptr[6] == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  for (int i = 0; i < 7; i++)
    free(dptr[i]);
  free(dptr);


  // SUBSTR
  char *t1 = "ababc";
  char *t2 = "abcbc";
  char *t3 = "abababc";
  char *t4 = "abcbcbc";
  ptr = my_strstr(t1, "abc");
  printf("strstr(\"%s\", \"%s\") [2] : %lu\n", t1, "abc", ptr - t1);
  if ((ptr - t1) == 2)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t2, "abc");
  printf("strstr(\"%s\", \"%s\") [0] : %lu\n", t2, "abc", ptr - t2);
  if ((ptr - t2) == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t3, "abc");
  printf("strstr(\"%s\", \"%s\") [4] : %lu\n", t3, "abc", ptr - t3);
  if ((ptr - t3) == 4)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  ptr = my_strstr(t4, "abc");
  printf("strstr(\"%s\", \"%s\") [0] : %lu\n", t4, "abc", ptr - t4);
  if ((ptr - t4) == 0)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  ptr = my_strstr(t1, "def");
  printf("strstr(\"%s\", \"%s\") [NULL] : %p\n", t1, "def", ptr);
  if (ptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

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
