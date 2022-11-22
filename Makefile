CFLAGS=-Wall -I.

SOURCES=\
    main.c \
    ssd1306/ssd1306.c \
    ssd1306/ssd1306_fonts.c

OBJECTS=$(SOURCES:.c=.o)

OUTPUT=ssd1306_test

# -------------------------------------------------- #

ifndef ARCH
ifdef CROSS_COMPILE
ARCH=$(CROSS_COMPILE)
else
ARCH=native
endif
endif

CC=$(CROSS_COMPILE)gcc
OBJ_DIR?=./obj/$(PREFIX)$(ARCH)/
BIN_DIR?=./bin/$(PREFIX)$(ARCH)/

GIT_BRANCH=$(shell git branch --show-current)
GIT_VERSION=$(shell git describe --abbrev=4 --dirty --always --tags)

all: $(SOURCES) $(OUTPUT)

.c.o :
	@mkdir -p $(OBJ_DIR)$(@D)
	$(CXX) -c $< $(CFLAGS) -o $(OBJ_DIR)$@

$(OUTPUT): $(OBJECTS)
	@mkdir -p $(BIN_DIR)$(@D)
	$(CXX) -o $(BIN_DIR)$(OUTPUT) $(LDFLAGS) $(addprefix $(OBJ_DIR), $^)

.PHONY:
	all clean

clean:
	rm -Rf $(OBJ_DIR)
	rm -Rf $(BIN_DIR)

