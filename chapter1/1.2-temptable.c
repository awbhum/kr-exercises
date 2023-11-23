/* see ../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print a table of conversions between fahrenheit and celsius */
int main(void) {
    int fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 256;
    step = 16;

    /* column header */
    printf("F\tC\n");

    for (fahr = lower; fahr <= upper; fahr+=step) {
        cel = ((fahr - 32) * 5) / 9;
        printf("%d\t%d\n", fahr, cel);
    }
}
