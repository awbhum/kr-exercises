/* see ../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print a table of conversions between fahrenheit and celsius */
int main(void) {
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 256;
    step = 16;

    /* heading */
    printf("  C\t     F\n");

    /* column header */
    for (cel = lower; cel <= upper; cel+=step) {
        fahr = ((cel * 9.0) / 5.0) + 32.0;
        printf("%3.0f\t%6.1f\n", cel, fahr);
    }
}
