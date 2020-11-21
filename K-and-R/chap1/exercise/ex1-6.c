#include <stdio.h>

/* copy input to output: 2nd version */
main()
{
    printf("Please type any keys or just type Ctrl-D to signal EOF.\n");
    int result = ((getchar() != EOF));
    printf("The result of 'getchar() != EOF' is: \n");
    printf("%d\n", result);

}
