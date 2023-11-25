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
        cout << "������ �������� �� " << i + 1 << "-� �����: ";
        cin >> profits[i];
    }
    int startMonth, endMonth; 
    cout << "������ ���������� ����� ��������: ";
    cin >> startMonth;
    cout << "������ ������� ����� ��������: ";
    cin >> endMonth;
    if (startMonth < 1 || endMonth > Months || startMonth > endMonth) {
        cerr << "����������� �������!" << endl;
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
    cout << "������������ �������� (" << maxProfit << ") ��� � " << maxMonth << "-�� �����." << endl;
    cout << "̳�������� �������� (" << minProfit << ") ��� � " << minMonth << "-�� �����." << endl;
    return 0;
}