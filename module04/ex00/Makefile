NAME = Animal00

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -I includes


SRCS = src/main.cpp \
       src/Animal.cpp \
       src/Dog.cpp \
       src/Cat.cpp \
       src/WrongAnimal.cpp \
       src/WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)


all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "✨ Animal project compiled successfully! ✨"

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