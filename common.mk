CC = nspire-gcc
AR = arm-none-eabi-ar
RANLIB = arm-none-eabi-ranlib
STRIP = arm-none-eabi-strip
TARGETS ?= $(TARGET)

INCLUDE ?= -I include
CFLAGS += -g -Wall -Wextra -Ofast -Wno-unused-parameter -Wno-implicit-fallthrough

NDLESS_HOME = $(shell dirname `which $(CC)`)/..

OBJECTS = $(SOURCES:.c=.o)

all: $(TARGETS)

$(TARGET): $(OBJECTS)
	$(AR) cr $@ $^
	$(RANLIB) $@
	$(STRIP) --strip-unneeded $@

.c.o:
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: clean all