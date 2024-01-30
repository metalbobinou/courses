#include "StrBasics.h"
#include "StrPart2.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|------------------------------|\n");
  printf("| LIBSTRING STR-PART2 (strtok) |\n");
  printf("|------------------------------|\n");

  main_regular_tests();

  return (0);
}

void main_regular_tests(void)
{
  char *ptr = NULL;
  char **dptr = NULL;
  char *t_strNULL = NULL;
  char *t_strEmpty = "";
  char *t_str0 = "ABCD";
  char *t_str1 = "LALA LELE LILI LOLO LULU LYLY";
  char t_str2[] = "TATA , TETE , TITI , TOTO , TUTU , TYTY";
  int ret;

  printf("#################\n");
  printf("# REGULAR TESTS #\n");
  printf("#################\n");

  // TOK
  //char *t_strNULL = NULL;
  dptr = my_strtok_simple(t_strNULL, ' ');
  printf("strtok(NULL, ' ') [NULL] : %p\n", (void *) dptr);
  if (dptr == NULL)
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");

  //char *t_strEmpty = "";
  dptr = my_strtok_simple(t_strEmpty, ' ');
  printf("strtok (\"\", ' ') [@] [NULL] : %p %p\n",
	 (void *) dptr,
	 (void *) dptr[0]);
  if ((dptr != NULL) && (dptr[0] == NULL))
    printf("OK\n");
  else
    printf("!!! ERROR !!!\n");
  free(dptr);

  //char *t_str0 = "ABCD";
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

  //char *t_str1 = "LALA LELE LILI LOLO LULU LYLY";
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


  //char t_str2[] = "TATA , TETE , TITI , TOTO , TUTU , TYTY";
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
}
