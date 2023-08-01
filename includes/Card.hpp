#ifndef CARD_HPP
#define CARD_HPP

#include "flashcard.hpp"

class Card
{
	private :
		std::string element1;
		std::string comment1;
		std::string element2;
		std::string comment2;

	public :
		std::string getElement1(void) const;
		std::string getComment1(void) const;
		std::string getElement2(void) const;
		std::string getComment2(void) const;

		void setComment1(std::string str);
		void setElement1(std::string str);
		void setElement2(std::string str);
		void setComment2(std::string str);

		Card(std::string ele1, std::string com1, std::string ele2, std::string com2);
		~Card(void);
};

#endif