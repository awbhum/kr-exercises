/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print whether or not the first character is EOF */
int main(void) {
    int c;
    while (c = (getchar() != EOF));
    printf("%d\n", c);
}
