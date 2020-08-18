#include <stdio.h>
main()
{
  printf("hello, world\c\n");
  // return 0; nothing special if commented out
}

// got the following warning:
/*
ex1-2.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    2 | main()
      | ^~~~
ex1-2.c: In function ‘main’:
ex1-2.c:4:10: warning: unknown escape sequence: '\c'
    4 |   printf("hello, world\c\n");
      |          ^~~~~~~~~~~~~~~~~~
*/
