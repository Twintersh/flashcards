#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

void prompt(Deck &deck)
{
	float percent = 0.0f;
	float nb = 0.0f;
	float good = 0.0f;

	std::cout << std::setprecision(3);
	while (1)
	{
		nb++;
		std::string answer;
		bool face = rand() % 2;
		Card *curCard = deck.getRandCard();
		if (!curCard)
			break;

		std::cout << curCard->getElement(face) << "\n❓> " << std::flush;
		getline(std::cin, answer);
		if (syntax_check(answer, curCard->getElement((face + 1) % 2)))
		{
			good++;
			percent = good / nb * 100.0f;
			std::cout << GRN "GOOD: " NC << curCard->getElement((face + 1) % 2) << " " << percent << "%" << std::endl << std::endl;
		}
		else
		{
			percent = good / nb * 100.0f;
			std::cout << RED "NUL: " NC << curCard->getElement((face + 1) % 2) << " " << percent << "%" << std::endl << std::endl;
		}
		// std::cout << good << " " << nb << std::endl;
		delete curCard;
	}
	std::cout << YEL"END ! final score: " << percent << "%" NC << std::endl;
}