# Définition des variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = MainEXE
SRCS = main.c 
OBJS = $(SRCS:.c=.o)

# Règle de construction du programme principal
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Règle de construction des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Règle pour nettoyer les fichiers temporaires
clean:
	rm -f $(OBJS) $(TARGET)
