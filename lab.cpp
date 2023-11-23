#include <iostream>
#include <Windows.h> 
#include <conio.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int mounths = 6;
	double profits[mounths];
		for (size_t i = 0; i < mounths; i++)
		{
			cout << "Введіть прибуток  за " << i + 1 << "-й місяць: ";
			cin >> profits[i];
		}
	double totalProfit = 0.0;
	{
		for (size_t i = 0; i < mounths; i++)
		{
			totalProfit += profits[i];
		}
		cout << "Загальний  прибуток  за 6  місяців: " << totalProfit << endl;
	}
	return  0;
}
