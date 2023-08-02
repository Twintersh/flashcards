#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"
#include "../includes/flashcard.hpp"

void Deck::addCard(Card *newCard)
{
	this->deck.push_back(newCard);
}

void Deck::rmCard(Card *oldCard)
{
	for (std::vector<Card*>::iterator it = this->deck.begin() ; it != this->deck.end() ; it++)
	{
		if (*it == oldCard)
		{
			this->deck.erase(it);
			// delete oldCard;
			break;
		}
	}
}

Card *Deck::getRandCard(void)
{
	if (this->deck.size() > 0)
	{
		int cardId = rand() % this->deck.size();
		Card *cur = this->deck[cardId];
		this->rmCard(cur);
		return (cur);
	}
	else
	{
		return (NULL);
	}
}

Deck::~Deck(void){}

Deck::Deck(void){}