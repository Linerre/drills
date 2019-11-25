#include <stdio.h>

#define LOWER  0       /* lower limit of table */
#define UPPER  300     /* upper limite*/
#define STEP   20      /* step size */

/* print Fahrenheit-Celsius table */
main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.9/9.0)*(fahr-32));
}
