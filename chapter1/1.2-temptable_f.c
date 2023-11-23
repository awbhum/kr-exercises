/* see ../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print a table of conversions between fahrenheit and celsius */
int main(void) {
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 256;
    step = 16;

    /* column header */
    printf("  F\t     C\n");

    for (fahr = lower; fahr <= upper; fahr+=step) {
        cel = (5.0/9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, cel);
    }
}
