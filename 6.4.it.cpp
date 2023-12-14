#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

int SumNep(int mas[], const int k);
int SumVid(int mas[], const int k);
void Array(int mas[], const int k);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	unsigned int Size;
	cout << "������ ������� �������� ������: ";
	cin >> Size;
	int* Arr = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		cout << "������ " << i << " ������� ������: ";
		cin >> Arr[i];
	}
	cout << endl;
	cout << "Array = { ";
	Array(Arr, Size);

	cout << "}";

	cout << endl;
	cout << "���� ����� � ��������� ��������: " << SumNep(Arr, Size) << endl;
	cout << "���� �� ������ � ������� ��'������ �������: " << SumVid(Arr, Size) << endl;

	return 0;
}

int SumNep(int mas[], const int k)
{
	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		if (i % 2 != 0) {
			sum += mas[i];
		}
	}
	return sum;
}

int SumVid(int mas[], const int k)
{
	int first, last;
	int sum = 0;
	for (first = 0; first < k; first++)
	{
		if (mas[first] < 0) break;
	}
	for (last = k - 1; last > first; last--)
	{
		if (mas[last] < 0) break;
	}
	for (int i = first + 1; i < last; i++)
	{
		sum += mas[i];
	}
	return sum;
}

void Array(int mas[], int k)
{
	for (int i = 0; i < k; i++) {
		cout << mas[i] << "; ";
	}
}
