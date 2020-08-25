#include <stdio.h>

/* replace each tab, backspace, and backslash with their literal c */

main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\b') {
      c = '\\b';
      putchar(c);
    }
     if (c == '\t') {
      c = "\\t";
      putchar(c);
    }
     if (c == '\\') {
      c = "\\";
      putchar(c);
    }
    putchar(c);
  }
}