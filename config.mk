# see LICENSE file for copyright and license details.

# rootfs prefix
sysroot =

# resource prefix
prefix = /usr/local

# executeable prefix
exec_prefix = $(prefix)

# static or dynamic
linkmode = dynamic 

# misc dirs
bindir = $(sysroot)$(exec_prefix)/bin
libdir = ${sysroot}${exec_prefix}/lib
incdir = $(sysroot)$(prefix)/include
sharedir = ${sysroot}$(prefix)/share
etcdir = $(sysroot)/etc
mandir = $(sharedir)/man

# cross-compiler target command prefix
crosstarget =

# preferred toolchain
CC = $(crosstarget)cc
AR = $(crosstarget)ar
AS = $(crosstarget)as
OBJCOPY = $(crosstarget)objcopy
OBJDUMP = $(crosstarget)objdump
STRINGS = $(crosstarget)strings
STRIP = $(crosstarget)strip
RANLIB = $(crosstarget)ranlib
NM = $(crosstarget)nm
READELF = $(crosstarget)readelf

# toolchain flags
CFLAGS = -pipe -Os -std=c99 -Wall -Wno-unused-variable -fPIC
CPPFLAGS = -D_DEFAULT_SOURCE -D_ARGMAX=256 -DPKGVER="\"$(version)\"" -DPKGBIN="\"$(BIN)\""
LDFLAGS = -Wl,--gc-sections,-s,-z,norelro,-z,now,--hash-style=sysv,--sort-section,alignment -s

ifeq ($(linkmode),static)
LDFLAGS += -static -Wl,-a,archive
CFLAGS += -static
endif
