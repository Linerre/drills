#include <stdio.h>

#define IN    /* inside a word */
#define OUT   /* outside a word */

/* count lines, words, and character in inpu*/
main()
{
  int c, nl, nc, state;

  state = OUT;
  nl = nw = nc = 0;
  while ((c = getchar() != EOF)) {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c = '\t' )
      state = OUT;
    else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("%d %d %d\n", nl, nw, nc);
}
