#include <iostream>

int main()
{
	int value = 0;

	while (true)
	{
		char buffer[50] = {};
		std::cout << "?«ìžë¥??…ë ¥?˜ì„¸??ì²«ë²ˆì§?: ";
		std::cin >> buffer;

		//ê²€ì¦?
		if((value = atoi(buffer)) == 0)
		{
			std::cout << "?«ìžë¥??…ë ¥?˜ì„¸??\n";
		}
		else
		{
			break;
		}
	}

	int value2 = 0;
	// ?…ë ¥.
	std::cout << "?«ìžë¥??…ë ¥?˜ì„¸??: ";
	std::cin >> value2;

	std::cout << "?…ë ¥?˜ì‹  ???«ìž???©ì? " << value + value2 << "?…ë‹ˆ??n";
	std::cin.get();
}