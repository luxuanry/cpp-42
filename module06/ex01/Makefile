NAME = serializer
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Serializer.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✨ Project compiled successfully! ✨"

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@echo "🧹 Cleaned object files."

fclean: clean
	rm -f $(NAME)
	@echo "🗑️ Cleaned executable."

re: fclean all

.PHONY: all clean fclean re