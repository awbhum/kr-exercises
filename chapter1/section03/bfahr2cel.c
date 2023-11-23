/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print a table of conversions between fahrenheit and celsius (backwards) */
int main(void) {
    int fahr;

    /* column header */
    printf("  F\t     C\n");

    for (fahr = 256; fahr >= 0; fahr-=16)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
}
