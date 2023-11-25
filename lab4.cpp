#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int months = 12;
    double profits[months];
    for (int i = 0; i < months; ++i) {
        cout << "¬вед≥ть прибуток за " << i + 1 << "-й м≥с€ць: ";
        cin >> profits[i];
    }
    double maxProfit = profits[0];
    double minProfit = profits[0];
    int maxMonth = 1;
    int minMonth = 1;
    for (int i = 1; i < months; ++i) {
        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i + 1;
        }
        if (profits[i] < minProfit) {
            minProfit = profits[i];
            minMonth = i + 1;
        }
    }
    cout << "ћаксимальний прибуток " << maxProfit << " був в " << maxMonth << "-м м≥с€ц≥.\n";
    cout << "ћ≥н≥мальний прибуток " << minProfit << " був в " << minMonth << "-м м≥с€ц≥.\n";
    return 0;
}