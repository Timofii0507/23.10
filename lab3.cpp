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
		cout << "Введіть довжину " << i + 1 << " сторони: ";
		cin >> P[i];
	}
	double perimetr = 0.0;
	{
		for (size_t i = 0; i < side; i++)
		{
			perimetr += P[i];
		}
		cout << "Периметр п'ятикутника = " << perimetr << endl;
	}
	return  0;
}