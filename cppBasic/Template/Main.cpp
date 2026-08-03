#include <iostream>

template<typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 클래스 템플릿
template<typename T>
class Data
{
public:
	Data(const T& newData)
		:data(newData)
	{
	}

	T GetData() const { return data; }
private:
	T data = 0;
};
int main()
{
	int a = 10;
	int b = 10;
	Swap(a, b);

	Data<int> intData(30);
	std::cout << intData.GetData();
	std::swap<int>(a, b);
	std::cin.get();
}