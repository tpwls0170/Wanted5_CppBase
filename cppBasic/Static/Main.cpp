#include "FIle1.h"
#include "FIle2.h"
#include"Person.h"
#include <iostream>

int personCount = 0;

class Person
{
public:
	Person()
	{
		++personCount;
		std::cout << personCount << "\n";
	}
	~Person()
	{
		--personCount;
		std::cout << personCount << "\n";
	}
private:
	static int persoCount;
};

//static 변수는 별도로 초기화 해야함
int Person::persoCount = 0;

int main()
{
	//FileOneFunction();
	//FileTwoFunction();
	/*Increment();
	Increment();
	Increment();*/
	Person p1;
	Person p2;

}