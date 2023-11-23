/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* count chars from stdin */
int main(void) {
    /* storage for the character and the current count */
    int c = 0, line_n = 0, space_n = 0, tab_n = 0;

    /* add to the count for each character */
    while ((c = getchar()) != EOF) {
        switch (c) {
            case ' ':
                space_n++;
                break;
            case '\n':
                line_n++;
                break;
            case '\t':
                tab_n++;
                break;
        }
    }
    
    /* print the character count */
    printf("%d sp, %d li, %d ta\n", space_n, line_n, tab_n);
}
