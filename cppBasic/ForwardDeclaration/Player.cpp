#include "Player.h"
#include "Weapon.h"

//ctrl + K + O 해당 헤더 및 cpp로 이동하는 단축키
Player::Player()
{
	weapon = new Weapon();
}

Player::~Player()
{
	if (weapon)
	{
		delete weapon;
	}
}