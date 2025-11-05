CC = gcc
CFLAGS = -Wall -Wextra -Werror -mconsole

# Archivos fuente principales
SRC = starter.c

# Archivos de test
TEST = test_challenge01.c

# Nombre del ejecutable
TARGET = challenge01

# Regla principal (compila el programa junto con los tests)
all:
	$(CC) $(CFLAGS) $(SRC) $(TEST) -o $(TARGET).exe

# Ejecutar los tests
test: all
	$(TARGET).exe

# Limpiar el ejecutable
clean:
	del $(TARGET).exe
