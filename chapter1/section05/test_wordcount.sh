#!/bin/sh

# test our 'wc' implementation against the installed 'wc'

[ -x ./min_wc ] || {
    printf "${0##*/}: error: min_wc not compiled\n"
    exit 1
}

[ -n "$(command -v wc)" ] || {
    printf "${0##*/}: error: wc not installed to this system\n"
    exit 1
}

./min_wc <${1:-$0}
wc <${1:-$0}
