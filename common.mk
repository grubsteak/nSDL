CC = nspire-gcc
AR = arm-none-eabi-ar
RANLIB = arm-none-eabi-ranlib
STRIP = arm-none-eabi-strip
TARGETS ?= TARGET

INCLUDE ?= -I include
CFLAGS += -g -Wall -Wextra -Ofast -Wno-unused-parameter -Wno-implicit-fallthrough

NDLESS_HOME = $(shell dirname `which $(CC)`)/..

OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(AR) cr $@ $^
	$(RANLIB) $@
    $(STRIP) --strip-unneeded $@ # don't do this for debug

.c.o:
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

install: $(TARGETS)
	cp $^ $(NDLESS_HOME)/lib

.PHONY: clean all install