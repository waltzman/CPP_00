C++ = c++
CPP_FLAGS = -Werror -Wall -Wextra -std=c++98 -pedantic

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

$(NAME): $(OBJS)
	@$(C++) $(CPP_FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@$(C++) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
