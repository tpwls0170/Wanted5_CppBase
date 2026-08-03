#include <iostream>
#include "Player.h"

int main()
{
	Player player1;
	Player player2("Ronnie");
	Player player3(player2);
	Player player4 = player3;

	std::cin.get();
}