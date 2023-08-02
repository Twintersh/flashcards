#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

bool checkExtensionFile(const char *filename)
{
	std::string ext = ".fc";
	size_t len = strlen(filename);
	size_t extlen = ext.length();

	if (len <= extlen)
		return (false);
	len--;
	for (size_t i = 0 ; i < extlen ; i++)
	{
		if (filename[len - i] != ext[extlen - 1 - i])
			return (false);
	}
	return (true);
}

static void cropSpaces(std::string &str)
{
	int len = str.length() - 1;

	while (len > 0 && str[len] == ' ')
		len--;
	if (len < 0)
		throw (std::out_of_range("bad file syntax"));
	str = str.substr(0, len + 1);
}

Deck &parse_infile(std::ifstream &infile, Deck &deck)
{
	std::string line;

	while (std::getline(infile, line, '\n'))
	{
		int i = 0;
		std::string face1;
		std::string face2;
		// get element face 1

		while (line[i] && line[i] == ' ')
			i++;
		while (line[i] && line[i] != '|')
		{
			face1 += line[i];
			i++;
		}
		if (!line[i])
			throw (std::out_of_range("bad file syntax"));

		// skip pipe and spaces
		i++;
		if (line[i] == '|') // if there is to many pipes
			throw (std::out_of_range("bad file syntax"));
		while (line[i] && line[i] == ' ')
			i++;
		if (!line[i]) // there is no other part
			throw (std::out_of_range("bad file syntax"));

		// get element face 2
		while (line[i] && line[i] != '\n')
		{
			face2 += line[i];
			i++;
		}
		cropSpaces(face1);
		cropSpaces(face2);
		Card *newCard = new Card(face1, face2);
		deck.addCard(newCard);
	}
	return (deck);
}