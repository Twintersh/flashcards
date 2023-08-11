#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

Card::Card(const std::string ele1, const std::string ele2)
{
	this->element1 = ele1;
	this->element2 = ele2;
}

Card::~Card(void){}



//getters
std::string Card::getElement(bool face) const
{
	if (face)
		return (this->element1);
	else
		return (this->element2);
}

//setters
void Card::setElement1(std::string str) {this->element1 = str;}
void Card::setElement2(std::string str) {this->element2 = str;}