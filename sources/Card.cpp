#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"

Card::Card(std::string ele1, std::string com1, std::string ele2, std::string com2)
{
	this->element1 = ele1;
	this->element2 = ele2;
	this->comment1 = com1;
	this->comment2 = com2;
}

Card::~Card(void){}

//getters
std::string Card::getElement1(void) const {return (this->element1);}
std::string Card::getElement2(void) const {return (this->element2);}
std::string Card::getComment1(void) const {return (this->comment1);}
std::string Card::getComment2(void) const {return (this->comment2);}

//setters
void Card::setComment1(std::string str) {this->comment1 = str;}
void Card::setComment2(std::string str) {this->comment2 = str;}
void Card::setElement1(std::string str) {this->element1 = str;}
void Card::setElement2(std::string str) {this->element2 = str;}