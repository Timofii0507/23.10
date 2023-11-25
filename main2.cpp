#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int Months = 12;
    double profits[Months];
    for (int i = 0; i < Months; ++i) {
        cout << "¬вед≥ть прибуток за " << i + 1 << "-й м≥с€ць: ";
        cin >> profits[i];
    }
    int startMonth, endMonth; 
    cout << "¬вед≥ть початковий м≥с€ць д≥апазону: ";
    cin >> startMonth;
    cout << "¬вед≥ть к≥нцевий м≥с€ць д≥апазону: ";
    cin >> endMonth;
    if (startMonth < 1 || endMonth > Months || startMonth > endMonth) {
        cerr << "Ќекоректний д≥апазон!" << endl;
        return 1;
    }
    double maxProfit = profits[startMonth - 1];
    double minProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;
    for (int i = startMonth; i <= endMonth; ++i) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxMonth = i;
        }
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minMonth = i;
        }
    }
    cout << "ћаксимальний прибуток (" << maxProfit << ") був у " << maxMonth << "-му м≥с€ц≥." << endl;
    cout << "ћ≥н≥мальний прибуток (" << minProfit << ") був у " << minMonth << "-му м≥с€ц≥." << endl;
    return 0;
}