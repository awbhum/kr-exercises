/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* count chars from stdin */
int main(void) {
    /* storage for the character and the current count */
    double c_ct;

    /* add to the count for each character */
    for (c_ct = 0; (getchar()) != EOF; c_ct++)
        ;
    
    /* print the character count */
    printf("%.0f\n", c_ct);
}
