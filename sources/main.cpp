#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"

void parse_infile(std::ifstream &infile)
{
	std::string line;
	while (std::getline(infile, line, '\n'))
	{
		// get element face 1
		int i = 0;
		std::string face1;
		while (line[i] && line[i] != '|')
		{
			face1 += line[i];
			i++;
		}
		if (!line[i])
			throw (std::out_of_range("bad file format"));

		// skip pipe and spaces
		i++;
		if (line[i] == '|') // if there is to many pipes
			throw (std::out_of_range("bad file format"));
		while (line[i] && line[i] == ' ')
			i++;
		if (!line[i]) // there is no other part
			throw (std::out_of_range("bad file format"));

		// get element face 2
		std::string face2;
		while (line[i] && line[i] != '\n')
		{
			face2 += line[i];
			i++;
		}
		std::cout << face1 << "|" << face2 << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong usage: This program takes a .fc file as argument." << std::endl;
		return (1);
	}
	try
	{
		std::ifstream infile(argv[1]);
		if (infile.is_open())
			parse_infile(infile);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}

