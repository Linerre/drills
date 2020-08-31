/* count lengths of words 1st version */
/* this --> #### */
#include <stdio.h>

#define OUT 0
#define IN 1

main() {
  int c, i, nletter, state;
  nletter = 0;
  state = OUT;
  while((c = getchar()) != EOF) {
    if (c != '\n' && c != '\t' && c !=' ') {
      state = IN;
      if (state == IN)
        ++nletter;
    } else
      state = OUT;
    for (i = 0; i < nletter; ++i)
      printf("#");
  nletter = 0;
  } 
}
