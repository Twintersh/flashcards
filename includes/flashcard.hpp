#ifndef FLASHCARD
#define FLASHCARD

class Card;
class Deck;

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstring>
#include <exception>
#include <ctime>
#include "Deck.hpp"
#include "Card.hpp"

void	prompt(Deck &deck);
Deck	&parse_infile(std::ifstream &infile, Deck &deck);
bool	checkExtensionFile(const char *filename);
bool	syntax_check(std::string str1, std::string str2);

#define BLK "\e[1;30m"
#define RED "\e[1;31m"
#define GRN "\e[1;32m"
#define YEL "\e[1;33m"
#define BLU "\e[1;34m"
#define MAG "\e[1;35m"
#define CYN "\e[1;36m"
#define WHT "\e[1;37m"
#define NC	"\e[0m"

#endif
