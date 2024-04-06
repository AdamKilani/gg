CC=gcc
CFLAGS=-Wall -Wextra -std=c99
LDFLAGS=

# List of source files
SOURCES=main.c mastermind.c color.c

# List of object files
OBJECTS=$(SOURCES:.c=.o)

# Executable name
EXECUTABLE=mastermind

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
