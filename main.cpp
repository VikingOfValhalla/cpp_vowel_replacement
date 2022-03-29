#include <iostream>
#include <string>
#include <list>

void vowel_replacement ()
{
	std::list<char> vowels = {'a', 'e', 'i', 'o', 'u'};

	std::string string_input;
	std::cin >> string_input;

	for (auto n : vowels)
	{

		if (string_input.find(n) == true)
		{
			std::cout << "Yes there is a vowel" << std::endl;
			// char aster = '*';
			// std::cout << string_input[n] << std::endl;
			// does not work -> string_input[n] = aster;
		}
	}
}
	

int main ()
{

	vowel_replacement();

	return 0;
}