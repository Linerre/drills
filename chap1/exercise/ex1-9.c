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