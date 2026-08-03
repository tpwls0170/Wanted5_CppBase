#include <iostream>

class Player
{
public:
	Player() = default;
	~Player() = default;
	
	void SetXY(int newX, int newY)
	{
		x = newX;
		y = newY;
	}

	friend class Manager;
	friend void SetPosition(Player& player, int newX, int newY)
	{
		// 정답.
		//player.SetXY(newX, newY);
		player.x = newX;
		player.y = newY;
	}
private:
	int x = 0;
	int y = 0;
};

class Manager
{
public:
	Manager(Player* const newPlayer) : player(newPlayer) {}

	void Test()
	{
		player->x = 30;
		player->y = 40;
	}
private:
	Player* player = nullptr;
};

int main()
{
	//객체 포인터 배열
	const int length = 5;
	Player* players[length] = {};

	//객체 생성
	for (int i = 0; i < length; i++)
	{
		players[i] = new Player();
	}
	
	// 사용
	SetPosition(*players[0], 3, 5);

	Manager manager(players[1]);
	manager.Test();

	// 객체 소멸 및 null
	for (Player*& player : players)
	{
		delete player;
		player = nullptr;
	}

	std::cin.get();
}