#ifndef FLASHCARD
#define FLASHCARD

class Card;
class Deck;

# include <iomanip>
# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <vector>
# include <cstring>
# include <exception>
# include <ctime>
# include <csignal>
# include <unistd.h>
# include <stdlib.h>
# include "Deck.hpp"
# include "Card.hpp"

# include "termcolor.hpp"

void	prompt(Deck &deck);
Deck	&parse_infile(std::ifstream &infile, Deck &deck);
bool	checkExtensionFile(const char *filename);
bool	syntax_check(std::string str1, std::string str2);

extern bool stop;

# define RED termcolor::color<196> <<
# define MAG termcolor::color<99> <<
# define GRN termcolor::color<40> <<
# define BLU termcolor::color<27> <<
# define WHT termcolor::color<15> <<
# define BLK termcolor::color<0> <<
# define YEL termcolor::color<3> <<
# define CYN termcolor::color<6> <<
# define NC	"\e[0m"

#endif
