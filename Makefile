CXX = gcc

SRC = ./src/*.c
OBJ = $(SRC:.cc=.o)
EXEC = ./exec/Benchme

all:
	@$(CXX) $(OBJ) $(CFLAGS) $(LFLAGS) -o $(EXEC) -lm
	@echo "-- Generation des executables --"

.PHONY: clean
clean:
	@rm -rf $(EXEC)
	@echo "-- Suppression des executables --"

.PHONY: doc
doc:
	doxygen
	@echo "-- Generation de la documentation Doxygen --"

