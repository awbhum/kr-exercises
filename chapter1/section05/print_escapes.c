/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

/* print escape sequenced characters */
int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\t':
                putchar('\\');
                putchar('t');
                break;
            case '\b':
                putchar('\\');
                putchar('b');
                break;
            case '\\':
                putchar('\\');
                putchar('\\');
                break;
            default:
                putchar(c);
                break;
        };
    };
}
