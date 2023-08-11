#ifndef DECK_HPP
# define DECK_HPP

# include "flashcard.hpp"

class Deck
{
	private :
		std::vector<Card*> deck;

	public :
		void	addCard(Card *newCard);
		void	rmCard(Card *oldCard);
		void	deleteDeck(int sig);
		int		getLen(void);

		Card	*getRandCard(void);

		Deck(void);
		~Deck(void);
};

#endif