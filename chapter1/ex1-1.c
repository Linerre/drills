#include <s
tdio.h>
main()
{
  printf("hello, world\n");
  // return 0; nothing special if commented out
}

// commenting out the first line will cause the following message:
/*
ex1-1.c:2:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    2 | main()
      | ^~~~
ex1-1.c: In function ‘main’:
ex1-1.c:4:3: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
    4 |   printf("hello, world\n");
      |   ^~~~~~
ex1-1.c:4:3: warning: incompatible implicit declaration of built-in function ‘printf’
ex1-1.c:1:1: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
  +++ |+#include <stdio.h>
    1 | // #include <stdio.h>
*/
