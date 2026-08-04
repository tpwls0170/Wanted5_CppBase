#include <iostream>
#include <cstdio>

int main()
{
	// 파일 입출력을 위한 변수
	FILE* file = nullptr;

	// 파일 열기
	fopen_s(&file, "Test.Txt","rb");

	// 파일 제대로 열었는지 확인
	if (!file)
	{
		std::cout << "파일 열기 실패\n";
		return 1;
	}

	// 파일 열기 성공
	std::cout << "파일 열기 성공\n";

	fclose(file);
	file = nullptr;

}