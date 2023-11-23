/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* count chars from stdin */
int main(void) {
    /* storage for the character and the current count */
    int c = 0, line_n = 0;

    /* add to the count for each character */
    while ((c = getchar()) != EOF)
        if (c == '\n')
            line_n++;
    
    /* print the character count */
    printf("%d\n", line_n);
}
