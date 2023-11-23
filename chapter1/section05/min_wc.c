/* see ../../LICENSE file for copyright and license details. */

#include <stdio.h>

#define IN 1
#define OUT 0

/* count lines, words, and characters */
int main(void) {
    int c, linect, wordct, charct, state;

    state = OUT;
    linect = wordct = charct = 0;

    while ((c = getchar()) != EOF) {
        ++charct;
        switch (c) {
            case '\n':
                state = OUT;
                ++linect;
                break;
            case ' ':
                state = OUT;
                break;
            case '\t':
                state = OUT;
                break;
            default:
                if (state == OUT) {
                    state = IN;
                    ++wordct;
                }
                break;
        }
    };

    printf("%d %d %d\n", linect, wordct, charct);
}
