#include <iostream>
#include <string>

class Actor
{
public:
	Actor(const char* newName)
	{
		// 이름 값 설정
		// 1. 공간 할당
		// 2. 값 복사
		size_t length = strlen(newName) + 1;
		name = new char[length];
		memset(name, 0, length);

		strcpy_s(name, length, newName);
	}
	~Actor()
	{
		if(name)
		{
			delete[] name;
			name = nullptr;
		}
	}
	Actor(const Actor& other)
	{
		// 1. 공간할당
		size_t length = strlen(other.name) + 1;
		name = new char[length];
		memset(name, 0, length);

		// 2. 값 복사
		strcpy_s(name, length, other.name);
	}

	// 이동 생성자 - Move Constructor
	Actor(Actor&& other)
		: name(other.name)
	{
		// 기존 메모리 해제
		if (name)
		{
			delete[] name;
			name = nullptr;
		}

		// 주소 값 이전
		name = other.name;

		// 주소값을 이전 시킨 후에 원본 주소를 null 대입
		other.name = nullptr;
	}
private:
	char* name = nullptr;
};

// 함수 오버로딩 (같은 이름의 함수가 여러개 배치되는 형태)
void Use(int& value)
{
	std::cout << "void Use(int& value)\n";
}

void Use(int&& value)
{
	std::cout << "void Use(int&& value)\n";
}

class Item
{

};

void Test(Item& item)
{
	std::cout << "void Test(Item& item)\n";
}

void Test(Item&& value)
{
	std::cout << "void Test(Item&& item\n";
}

template<typename T>
void Function(T&& value)
{
	Test(std::forward<T>(value));
}

int main()
{
	int value = 10;
	Use(value);
	Use(std::move(value));

	Item item;
	Function(item);
	Function(Item());

	//std::unique_ptr<Actor> actor1 = std::make_unique<Actor>();
	//std::unique_ptr<Actor> actor2 = std::move(actor1);
	
	//std::string actor2Name = "TestActor";
	//Actor actor1("Test");
	//Actor actor2(actor2Name);
	// count는 L-Value
	// L-Value : 메모리를 차지하고 / 이름이 있어 식별이 가능 / 변경이 가능
	// 10은 정수 리터럴로서 R-Value
	// R-Value : 임시 값
	//int count = 10;

	// L-Value Reference(L-Value 참조)
	//int& lRef = count;
	//int& lRef2 = 10; // 오류 R-Value 참조인데 L-Value로 받고있어서 오류가난다.

	// R-Value Reference(R-Value 참조)
	// int&& rRef = count; // 오류
	//int&& rRef = 10;
}