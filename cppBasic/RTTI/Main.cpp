#include <iostream>

class Actor
{
public:
	virtual ~Actor() = default;
};

class Camera : public Actor
{

};

class Player : public Actor
{

};


int main()
{
	// 업 캐스팅(Up_Casting) - 안전함
	Actor* actor1 = new Player();
	Actor* actor2 = new Camera();

	// 다운캐스팅(Down_Casting) -안전하지 않음
	// RTTI가 필요한 형변환
	auto player = dynamic_cast<Player*>(actor1);

	if (player)
	{
		std::cout << "Player 형변황 성공\n";
	}

	const type_info& typeInfo1 = typeid(*actor1);
	const type_info& typeInfoPlayer = typeid(Player);
	const type_info& typeInfo2 = typeid(*actor2);

	if (typeInfo1 == typeInfoPlayer)
	{
		std::cout << "actor1은 "<< typeInfo1.name() <<"\n";
	}
	std::cin.get();
}