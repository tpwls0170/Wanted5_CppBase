#include <iostream>

class Entity
{
public:
	Entity() { std::cout << "Entity() called\n"; }
	virtual ~Entity() { std::cout << "~Entity() called\n"; }

	virtual const char* GetName() { return "Entity"; }
};

class Player : public Entity
{
public:
	Player(const char* inName)
	{
		size_t length = strlen(inName) + 1;
		strcpy_s(name, length, inName);
		std::cout << "Player() called\n";
	}
	~Player() { std::cout << "~Player() called\n"; }
	virtual const char* GetName() override { return name; }

private:
	// 이름 값 저장 변수.
	char name[15] = {};
};

int main()
{
	//객체 생성
	Entity* e1 = new Entity();
	Entity* e2 = new Player("Ronnie");

	//이름 검색
	//std::cout << e1->GetName() << "\n";
	//std::cout << e2->GetName() << "\n";

	delete e1;
	e1 = nullptr;
	delete e2;
	e2 = nullptr;

}