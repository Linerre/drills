#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words, and characters in input */
main() {
  int c, state, lastc;

  state = OUT;
  while((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == IN) {
       putchar('\n');
       state = OUT;
      }   
    } else if (state == OUT) {
       state = IN;
       putchar(c);
    } else
        putchar(c);
  }
}