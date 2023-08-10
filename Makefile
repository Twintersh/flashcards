CC = c++
NAME = flashcard
SRC = sources/main.cpp \
	sources/parsing.cpp \
	sources/Card.cpp \
	sources/Deck.cpp \
	sources/prompt.cpp \
	sources/syntax_checker.cpp

HEADER = includes/flashcard.hpp \
	includes/Card.hpp \
	includes/Deck.hpp

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
	@ valgrind ./$(NAME) capitals/africa.fc ; echo ""

fclean : clean
	@rm -rf $(NAME)

.PHONY : clean re fclean all
