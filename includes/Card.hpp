#ifndef CARD_HPP
#define CARD_HPP

#include "flashcard.hpp"

class Card
{
	private :
		std::string element1;
		std::string element2;

	public :
		std::string getElement(bool face) const;

		void setElement1(std::string str);
		void setElement2(std::string str);

		Card(std::string ele1, std::string ele2);
		~Card(void);
};

#endif