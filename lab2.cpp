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
    cout << "������ �������� ������:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << "������� " << i + 1 << ": ";
        cin >> myArray[i];
    } 
    cout << "����� � ����������� �������: ";
    for (int i = arraySize - 1; i >= 0; --i) {
        cout << myArray[i] << " ";
    }
    return 0;
}