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
			cout << "Ââåä³òü ïðèáóòîê  çà " << i + 1 << "-é ì³ñÿöü: ";
			cin >> profits[i];
		}
	double totalProfit = 0.0;
	{
		for (size_t i = 0; i < mounths; i++)
		{
			totalProfit += profits[i];
		}
		cout << "Çàãàëüíèé  ïðèáóòîê  çà 6  ì³ñÿö³â: " << totalProfit << endl;
	}
	return  0;
}
