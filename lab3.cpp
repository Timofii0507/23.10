#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int side = 5;
	double P[side];
	for (size_t i = 0; i < side; i++)
	{
		cout << "������ ������� " << i + 1 << " �������: ";
		cin >> P[i];
	}
	double perimetr = 0.0;
	{
		for (size_t i = 0; i < side; i++)
		{
			perimetr += P[i];
		}
		cout << "�������� �'���������� = " << perimetr << endl;
	}
	return  0;
}