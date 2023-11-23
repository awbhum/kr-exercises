/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* copy input to output */
int main(void) {
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}
