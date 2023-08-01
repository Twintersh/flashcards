CC = c++
NAME = flashcard
SRC = sources/main.cpp \
	sources/Card.cpp
HEADER = includes/flashcard.hpp \
	includes/Card.hpp
OBJ=$(SRC:.cpp=.o)
CFLAGS = -Werror -Wall -Wextra

all : $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

re : fclean all

clean :
	rm -rf $(OBJ)

run : all
	@ ./$(NAME) test.fc

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
