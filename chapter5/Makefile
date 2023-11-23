# see ../LICENSE file for copyright and license details.

include ../config.mk

# file vars
SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

all: $(BIN)

$(BIN): 
	@printf " [CCLD]\t\t$@\n"
	@$(CC) $@.c -o $@ $(CFLAGS) $(CPPFLAGS) $(LDFLAGS)

clean:
	rm -rf $(BIN)

.PHONY: all clean
