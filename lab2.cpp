#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int arraySize = 5; 
    int myArray[arraySize];
    cout << "Ââåä³òü åëåìåíòè ìàñèâó:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "Åëåìåíò " << i + 1 << ": ";
        cin >> myArray[i];
    }
    cout << "Ìàñèâ ó çâîðîòíüîìó ïîðÿäêó: ";
    for (int i = arraySize - 1; i >= 0; --i) {
        cout << myArray[i] << " ";
    }
    return 0;
}
