#include <iostream>
//#include <Windows.h>
#include <string>

// 클래스
class Player
{
public:
	Player(const char* name)
	{
		// 문자열 저장을 위해 동적할당.
		size_t length = strlen(name) + 1;
		this->name = new char[length];

		// 값 저장.
		for (size_t ix = 0; ix < length - 1; ++ix)
		{
			this->name[ix] = name[ix];
		}

		// 문자열 종료 처리.
		this->name[length - 1] = '\0';
	}
	~Player()
	{
		//name 값이 null인지 확인
		//if (name)
		//if(name!= nullptr)
		if (nullptr != name)
		{

		}
	}

	// 이름 출력
	void PrintName() const
	{
		std::cout << name << "\n";
	}

private:
	// 이름을 저장할 변수
	char* name = nullptr;
};

int main()
{
	Player player("안녕");
	player.PrintName();
	// 문자열
	const char* name = "Ronnie";

	// 문자열 크기(문자 개수)
	size_t length = strlen(name);

	// Wide Character
	const wchar_t* wcName = L"Ronnie";

	// Windows 타입
	//WCHAR

	// STL 문자열 타입
	std::string nameString = "Ronnie Jang";
	std::cout << nameString << "\n";
	std::cout << "nameString Length: " << nameString.size() << "\n";
	//std::wstring

	//std::string을 C-Raw string으로,
	const char* rawName = nameString.c_str();
	
	// std::cout << "string length " << length << " ";
	std::cin.get();
}