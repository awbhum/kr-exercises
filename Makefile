# see LhCENSE file for copyright and license details.

# file vars
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

include config.mk

all: $(BIN)

$(BIN): %.c
	@printf " [CC]\t\t$@\n"
	@$(CC) -c $< -o $@ $(CFLAGS) $(CPPFLAGS)

$(OBJ): $(SRC)

$(BIN): $(OBJ)
	@printf " [CCLD]\t\t$@\n"
	@$(CC) $(OBJ) -o $@ $(LDFLAGS) $(LIBS)

clean:
	rm -rf $(OBJ) $(BIN)

.PHONY: all clean
