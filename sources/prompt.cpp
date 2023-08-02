#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

void prompt(Deck &deck)
{
	float percent = 0.0f;
	float nb = 0.0f;
	float good = 0.0f;
	bool face;
	std::string choice;

	std::cout << std::setprecision(3);

	std::cout << GRN "Which face do yo want to train ?\n(1, 2, rand)> " NC << std::flush;
	getline(std::cin, choice);
	if (choice == "1")
		face = 1;
	else if (choice == "2")
		face = 0;
	else if (choice == "rand")
		face = rand() % 2;
	else
		throw(std::out_of_range("Bad input"));

	while (1)
	{
		std::string answer;

		if (choice == "rand")
			face = rand() % 2;

		nb++;
		Card *curCard = deck.getRandCard();
		if (!curCard)
			break;

		std::cout << curCard->getElement(face) << "\n❓> " << std::flush;
		getline(std::cin, answer);
		if (syntax_check(answer, curCard->getElement((face + 1) % 2)))
		{
			good++;
			percent = good / nb * 100.0f;
			std::cout << GRN "GOOD: " NC << curCard->getElement((face + 1) % 2) << BLU " Score: " << percent << "%" NC << std::endl << std::endl;
		}
		else
		{
			percent = good / nb * 100.0f;
			std::cout << RED "NUL: " NC << curCard->getElement((face + 1) % 2) << BLU " Score: " << percent << "%" NC << std::endl << std::endl;
		}
		// std::cout << good << " " << nb << std::endl;
		delete curCard;
	}
	std::cout << YEL"END ! final score: " << percent << "%" NC << std::endl;
}