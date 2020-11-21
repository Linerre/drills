#include <stdio.h>

/* capture the value of EOF */
main()
{
  int c;
  printf("Hit Ctrl + D to see EOF value\n");
  c = getchar();
  putchar(c);
  printf("\n");

}
