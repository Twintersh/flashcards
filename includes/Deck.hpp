#ifndef DECK_HPP
# define DECK_HPP

#include "flashcard.hpp"
#include "Card.hpp"

class Deck
{
	private :
		std::vector<Card> deck;

	public :
		void	addCard(Card newCard);

}

#endif