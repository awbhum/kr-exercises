# see ../LICENSE file for copyright and license details.

include ../config.mk

# file vars
DIRS = $(wildcard section*)

all: $(BIN)

all:
	@for i in $(DIRS); do $(MAKE) -C $$i; done

clean:
	@for i in $(DIRS); do $(MAKE) -C $$i clean; done

.PHONY: all clean
