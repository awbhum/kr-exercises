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
                if (space_n < 2)
                    putchar(c);
                break;
            case '\n':
                line_n++;
                if (line_n < 2)
                    putchar(c);
                break;
            case '\t':
                tab_n++;
                if (tab_n < 2)
                    putchar(c);
                break;
            default:
                putchar(c);
        }
    }
}
