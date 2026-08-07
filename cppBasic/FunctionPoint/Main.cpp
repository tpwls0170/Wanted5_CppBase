#include <iostream>

void Test()
{
	std::cout << "test\n";
}

float Add(float a, float b)
{
	return a + b;
}

float Multiply(float a, float b)
{
	return a * b;
}

// 버블 정렬
void bubbleSort(int* array, int length)
{
	// 정렬처리
	for (int ix = 0; ix < length - 1; ++ix)
	{
		for (int yx = 0; yx < length - 1; ++yx)
		{
			if (array[yx] > array[yx + 1])
			{
				int temp = array[yx];
				array[yx] = array[yx +1];
				array[yx + 1] = temp;
			}
			std::cout << yx << " ";
		}
		std::cout << "\n";
	}
}

int main()
{
	int array[] = {3, 7, 8, 9, 1, 2};
	int length = sizeof(array) / sizeof(array[0]);
	//bubbleSort(array, length);

	for (int i = 0; i < length - 1; ++i)
	{
		for (int y = 0; y < length - 1; ++y)
		{
			if (array[y] > array[y + 1])
			{
				int temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
			}
			std::cout << array[y] << " ";
		}
		std::cout << "\n";
	}
	// 함수 포인터
	//void(*FunctionPointer)() = nullptr;

	// 함수 포인터에 함수 주소 저장
	//FunctionPointer = Test;
	//FunctionPointer = &Test;

	//if (FunctionPointer)
	//{
	//	FunctionPointer();
	//}

	//Test();

	//float (*Calculator)(float, float) = Add;
	//float result = Calculator(10.0f, 25.0f);

	//std::cout << "result: " << result << "\n";

	//Calculator = Multiply;
	//result = Calculator(10.0f, 25.0f);
	//std::cout << "result: " << result << "\n";
}