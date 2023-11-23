/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* copy input to output */
int main(void) {
    char c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    };
}
