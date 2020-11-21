#include <stdio.h>

/* replace each tab, backspace, and backslash with their literal c */

main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\b')
      printf("\\b");
    if (c == '\t')
      printf("\\t");
    if (c == '\\')
      printf("\\\\");
    if (c != '\b')
      if(c != '\t')
        if(c != '\\')
          putchar(c);
  }
}