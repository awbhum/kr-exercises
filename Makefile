# see LICENSE file for copyright and license details.

include config.mk

# subdirs
DIRS = $(wildcard chapter*)

all:
	@for i in $(DIRS); do $(MAKE) -C $$i; done

clean:
	@for i in $(DIRS); do $(MAKE) -C $$i clean; done

.PHONY: all clean

