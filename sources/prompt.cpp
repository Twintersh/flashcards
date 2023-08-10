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

	// chose which face of the cards
	std::cout << GRN "Which face do you want to train ?\n(1, 2, rand)> " NC << std::flush;
	getline(std::cin, choice);
	if (choice == "1")
		face = 1;
	else if (choice == "2")
		face = 0;
	else if (choice == "rand")
		face = rand() % 2;
	else
		throw(std::out_of_range("Bad input"));

	// prompt loop
	while (1)
	{
		system("clear");
		std::cout << BLU "Score: " << percent << "%" NC << std::endl;
		std::string answer;

		if (choice == "rand")
			face = rand() % 2;
		nb++;
		Card *curCard = deck.getRandCard();
		if (!curCard) // end of the deck
			break;
		std::cout << curCard->getElement(face) << "\n❓> " << std::flush;

		getline(std::cin, answer);
		if (std::cin.eof()) {delete curCard; throw(std::out_of_range("Bad input"));}
		
		if (syntax_check(answer, curCard->getElement((face + 1) % 2)))
		{
			good++;
			percent = good / nb * 100.0f;
			std::cout << GRN "GOOD !" NC << curCard->getElement((face + 1) % 2) << std::endl;
			sleep(1);
		}
		else
		{
			percent = good / nb * 100.0f;
			std::cout << RED "NUL: " NC << curCard->getElement((face + 1) % 2) << BLU " Score: " << percent << "%" NC << std::endl;
			do{
				std::cout << "Type correct answer> " << std::flush;

				getline(std::cin, answer);
				if (std::cin.eof()) {delete curCard; throw(std::out_of_range("Bad input"));}
			}while (!syntax_check(answer, curCard->getElement((face + 1) % 2)));
		}
		std::cout << std::endl;
		delete curCard;
	}
	std::cout << YEL"END ! final score: " << percent << "%" NC << std::endl;
}