/* see ../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print a table of conversions between fahrenheit and celsius */
int main(void) {
    float fahr, cel;
    float lower, upper, step;

    lower = 0;
    upper = 256;
    step = 16;

    /* column header */
    printf("    F\t    C\n");

    for (fahr = lower; fahr <= upper; fahr+=step) {
        cel = ((fahr - 32) * 5.0) / 9.0;
        printf("%5.1f\t%5.1f\n", fahr, cel);
    }
}
