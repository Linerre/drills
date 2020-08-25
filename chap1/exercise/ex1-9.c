#include <stdio.h>

/* replace multiple blanks with one */
main()
{
  int c, bl, lastc;
  bl = 0;
  while ((c = getchar()) != EOF) {
    if (c != ' ')
      putchar(c);
    if (c == ' ') {
      ++bl;
      if (bl == 1)
        putchar(c);
      if (bl > 1) {
        if (lastc == ' ')
          bl = 1;
        if (lastc != ' ') {
          putchar(c);
        }
      }
    }
    lastc = c;
  }
}

/* a more concise implementaion from the Answer Book */
#include <stdio.h>

#define NONBLANK 'a'

main()
{
  int c, lastc;

  lastc = NONBLANK;
  while ((c = getchar()) != EOF) {
    if (c != ' ')
      putchar(c);
    if (c == ' ')
      if (lastc != ' ')
        putchar(c);
    lastc = c;
  }
}