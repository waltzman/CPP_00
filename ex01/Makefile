CPP = c++
CPP_FLAGS = -Wall -Wextra -Werror -std=c++98
TARGET = PhoneBook
INC = app.hpp
SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	@$(CPP) $(CPP_FLAGS) -o $@ $^

%.o: %.cpp
	@$(CPP) $(CPP_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(TARGET)

re: fclean all

.PHONY:	all clean fclean re
