#include <stdio.h>

/* count blanks in input */
main () 
{
  int c, bl, nl, tb;

  bl = 0;
  nl = 0;
  tb = 0;
  /* while statement must have braces {} */
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++bl;
    if (c == '\n')
      ++nl;
    if (c == '\t')
      ++tb;
  }
  printf("blanks in total: %d\n", bl);
  printf("newlines in totoal: %d\n", nl);
  printf("tabs in total: %d\n", tb);
}