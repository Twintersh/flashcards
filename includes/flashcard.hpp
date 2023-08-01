#ifndef FLASHCARD
#define FLASHCARD

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

void parse_infile(std::ifstream &infile);
void error(const std::string &msg, unsigned int ec);

#endif