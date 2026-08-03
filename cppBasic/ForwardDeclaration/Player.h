#pragma once
// 전방선언 하는 이유
// 1. 컴파일 시간 단축
// 2. 헤더 순환 참조 방지
class Weapon;

class Player
{
public:
	Player();
	~Player();
private:
	// weapon 변수
	Weapon* weapon = nullptr;
};

