#include <stdio.h>
/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */
main()
{
  float fahr, celsius; // float is more accurate
  float lower, upper, step;

  lower = -17;     /* lower limit of temperature scale */
  upper = 148;   /* upper limit*/
  step = 11;     /*step size*/

  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("Celsiuss\tFahrenheit\n");
    printf("%6.1f\t\t%3.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
