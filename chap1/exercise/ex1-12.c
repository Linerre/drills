#include <stdio.h>

#define IN 1   /* inside a word */
#define OUT 0  /* outside a word */

/* count lines, words, and characters in input */
main() {
  int c, state;

  // state = OUT;
  // nl=nw=nc=0;
  while((c=getchar()) != EOF) {
    if (c == ' ' || c == '\t') {
      // state = OUT;
      printf("\n");
    }
    else {
      // state = IN;
      putchar(c);
    }
  }
  // printf("newline: %d; new word: %d; new character: %d\n", nl, nw, nc);
}