#include <iostream>

using namespace std;

void CreateMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 30;
	}
}
void PrintMassive(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << ' ';
	}
	cout << endl;
}

int GetValue()
{
	int value;
	cin >> value;
	return value;
}

void SwapNumbers(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		swap(*(arr + i), *(arr + i + 1));
	}
}

int main()
{
	setlocale(0, "");
	srand(time(NULL));

	cout << "Введите длину массива: " << endl;
	int size = GetValue();

	int* arr = new int[size];

	CreateMassive(arr, size);
	PrintMassive(arr, size);

	cout << "Массив со смещением: " << endl;
	SwapNumbers(arr, size - 1);
	PrintMassive(arr, size);

	delete[] arr;

	return 0;
}