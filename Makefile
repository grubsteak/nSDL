CC = nspire-gcc
AR = arm-none-eabi-ar
RANLIB = arm-none-eabi-ranlib
STRIP = arm-none-eabi-strip

INCLUDE = -I include
CFLAGS = -g -Wall -Wextra -Ofast -Wno-unused-parameter -Wno-implicit-fallthrough

NDLESS_HOME = $(shell dirname `which $(CC)`)/..

TARGET = libSDL.a
CONFIG_H = include/SDL_config.h
SOURCES = \
	src/SDL.c \
	src/SDL_error.c \
	src/SDL_fatal.c \
	src/audio/SDL_audio.c \
	src/audio/SDL_audiocvt.c \
	src/cpuinfo/SDL_cpuinfo.c \
	src/events/SDL_active.c \
	src/events/SDL_events.c \
	src/events/SDL_expose.c \
	src/events/SDL_keyboard.c \
	src/events/SDL_mouse.c \
	src/events/SDL_quit.c \
	src/events/SDL_resize.c \
	src/file/SDL_rwops.c \
	src/joystick/SDL_joystick.c \
	src/stdlib/SDL_getenv.c \
	src/stdlib/SDL_iconv.c \
	src/stdlib/SDL_malloc.c \
	src/stdlib/SDL_qsort.c \
	src/stdlib/SDL_stdlib.c \
	src/stdlib/SDL_string.c \
	src/thread/SDL_thread.c \
	src/thread/generic/SDL_syscond.c \
	src/thread/generic/SDL_sysmutex.c \
	src/thread/generic/SDL_syssem.c \
	src/thread/generic/SDL_systhread.c \
	src/timer/SDL_timer.c \
	src/timer/tinspire/SDL_systimer.c \
	src/video/SDL_blit.c \
	src/video/SDL_blit_0.c \
	src/video/SDL_blit_1.c \
	src/video/SDL_blit_A.c \
	src/video/SDL_blit_N.c \
	src/video/SDL_bmp.c \
	src/video/SDL_cursor.c \
	src/video/SDL_gamma.c \
	src/video/SDL_pixels.c \
	src/video/SDL_RLEaccel.c \
	src/video/SDL_stretch.c \
	src/video/SDL_surface.c \
	src/video/SDL_video.c \
	src/video/SDL_yuv.c \
	src/video/SDL_yuv_mmx.c \
	src/video/SDL_yuv_sw.c \
	src/video/tinspire/SDL_tinspireevents.c \
	src/video/tinspire/SDL_tinspirefonts.c \
	src/video/tinspire/SDL_tinspirenti.c \
	src/video/tinspire/SDL_tinspireutils.c \
	src/video/tinspire/SDL_tinspirevideo.c
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	cp $(CONFIG_H).default $(CONFIG_H)
	$(AR) cr $@ $^
	$(RANLIB) $@
	# $(STRIP) --strip-unneeded $@

.c.o:
	$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

install: $(TARGET)
	cp $< $(NDLESS_HOME)/lib

.PHONY: clean install all