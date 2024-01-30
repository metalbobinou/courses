#include "StrBasics.h"
#include "StrPart2.h"

#include <stdlib.h>
#include <stdio.h>

void main_regular_tests(void);

int main(void)
{
  printf("|------------------------------|\n");
  printf("| LIBSTRING STR-PART2 (strcat) |\n");
  printf("|------------------------------|\n");

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
}
