NAME = braiiiiiiinnnzzzz_horde
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Fix: Ensure all file names here match the case of your actual source files (lower case required)
SRCS = main.cpp Zombie.cpp zombieHorde.cpp

# Convert source files to object files (.cpp -> .o)
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(NAME)
	@echo "Compilation successful! Run with: ./$(NAME)"

# Link all object files into the final executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Rule to compile a single .cpp file into a .o file
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)

# Clean up everything (objects and executable)
fclean: clean
	rm -f $(NAME)

# Rebuild (clean all, then build all)
re: fclean all

.PHONY: all clean fclean re