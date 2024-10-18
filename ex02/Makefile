NAME     = a.out
CC      = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
SRCS     = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS     = $(SRCS:.cpp=.o)
INCLUDES	= -I .
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re