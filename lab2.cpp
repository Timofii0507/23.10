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
    std::cout << "������ �������� ������:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "������� " << i + 1 << ": ";
        std::cin >> myArray[i];
    }
    std::cout << "����� � ����������� �������: ";
    for (int i = arraySize - 1; i >= 0; --i) {
        std::cout << myArray[i] << " ";
    }
    return 0;
}