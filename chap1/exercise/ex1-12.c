#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words, and characters in input */
main() {
  int c, state, lastc;

  state = OUT;
  while((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
      // printf("\n");
    }
    if (state == OUT) {
      if (lastc == ' ' || lastc == '\t' || lastc == '\n') {
        printf("\n");
        putchar(c);
        state = IN;
      }
    }
    else
      putchar(c);
  
  lastc = c; 
  }
  
  // printf("newline: %d; new word: %d; new character: %d\n", nl, nw, nc);
}