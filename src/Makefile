CC = g++
CFLAGS = -O2 -Wall -std=c++17
SRC = main.cpp
EXEC = program
OBJ = $(SRC:.cpp=.o)
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	@echo $(OBJ)
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)
clean:
	rm -f $(EXEC) $(OBJ)
all: $(EXEC)
	@echo "Build complete"
