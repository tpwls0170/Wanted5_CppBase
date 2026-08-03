#include <iostream>

//â�ʸ� �Ѵٴ� ���� ���� �Ǵ� ����Ѵٴ� �ǹ�,
void Release(int** t)
{
	if (t != nullptr)
	{
		delete t;
		t = nullptr;
	}
}

// �� ������ ���� ���� ��ȯ�ϴ� �c��
void Swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���۷����� Ȱ���� Swap �Լ�
void SwapRaf(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int numberA = 10;
	int numberB = 20;
	//Swap(&numberA, &numberB);
	SwapRaf(numberA, numberB);

	int var = 8;
	int* ptr = &var;

	int* testPtr = new int;
	Release(&testPtr);
	delete testPtr;
	testPtr = nullptr;

	const int length = 100;
	int* buffer = new int[length];
	int** bufferPtr = &buffer;
	memset(buffer, 0, sizeof(int) * length);


	delete[] buffer;
	std::cin.get();
}