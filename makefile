CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =

SRC = main.c mastermind.c color.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = mastermind

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
