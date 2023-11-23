/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* count chars from stdin */
int main(void) {
    /* storage for the character and the current count */
    long c_ct = 0;

    /* add to the count for each character */
    while ((getchar()) != EOF)
        c_ct++;
    
    /* print the character count */
    printf("%ld\n", c_ct);
}
