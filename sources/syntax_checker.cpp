#include "../includes/flashcard.hpp"
#include "../includes/Card.hpp"
#include "../includes/Deck.hpp"

static void replace_chars(std::string &str)
{
	for (size_t i = 0 ; i < str.length() ; i++)
	{
		str[i] = std::tolower(str[i]);
		if (str[i] == '-')
			str[i] = ' ';
		if (str[i] == -61 && (str[i + 1] == -88 || str[i + 1] == -87 || str[i + 1] == -119 || str[i + 1] == -120))
			str.replace(i, 2, 1, 'e');
	}
}

bool syntax_check(std::string str1, std::string str2)
{
	replace_chars(str1);
	replace_chars(str2);

	if (str1 == str2)
		return (true);
	else
		return (false);
}