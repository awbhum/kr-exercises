/* see ../LICENSE file for copyright and license details. */

#include <stdio.h>

/* macros */
#define LOWER 0
#define UPPER 256
#define INCREMENT 16

/* print a table of conversions between fahrenheit and celsius */
int main(void) {
    int fahr;

    /* table heading */
    printf("%3s\t%6s\n", "F", "C");

    for (fahr = LOWER; fahr <= UPPER; fahr+=INCREMENT)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32.0));
}
