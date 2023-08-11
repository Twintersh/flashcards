#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

bool stop;

int main(int argc, char **argv)
{
	srand(time(NULL));
	stop = false;
	if (argc != 2)
	{
		std::cout << "Wrong usage: This program takes a .fc file as argument." << std::endl;
		return (1);
	}
	try
	{
		Deck deck;
		if (!checkExtensionFile(argv[1]))
			throw (std::invalid_argument("Bad file extension"));
		std::ifstream infile(argv[1]);
		if (infile.is_open())
			deck = parse_infile(infile, deck);
		prompt(deck);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}
