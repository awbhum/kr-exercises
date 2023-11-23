/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

int main(void) {
    char c;
    while (c != EOF) {
        c = getchar();
        if (c != EOF)
            putchar(c);
    };
}
