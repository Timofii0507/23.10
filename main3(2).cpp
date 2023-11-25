#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
#include <limits>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int MAX_SIZE = 99999;
    int arr[MAX_SIZE];
    int N;
    cout << "������ ������� �������� � �����: ";
    cin >> N;
    cout << "������ �������� ������:\n";
    for (int i = 0; i < N; ++i)
    {
        cout << "������� " << i + 1 << ": ";
        cin >> arr[i];
    }
    double sumOfNegatives = 0;
    double productBetweenMinMax = 1;
    double productOfEvenIndexes = 1;
    double sumBetweenFirstAndLastNegative = 0;
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            sumOfNegatives += arr[i];
            if (arr[i] < arr[minIndex])
                minIndex = i;
            maxIndex = i;
        }
    }
    for (int i = minIndex + 1; i < maxIndex; ++i) {
        minIndex < maxIndex;
        productBetweenMinMax *= arr[i];
    }
    for (int i = 0; i < N; i += 2) {
        productOfEvenIndexes *= arr[i];
    }
    for (int i = minIndex + 1; i < maxIndex; ++i) {
        sumBetweenFirstAndLastNegative += arr[i];
    }
    cout << "\n����������:\n";
    cout << "���� ��'����� ��������: " << sumOfNegatives << endl;
    cout << "������� �������� �� min � max: " << productBetweenMinMax << endl;
    cout << "������� �������� � ��������� ��������: " << productOfEvenIndexes << endl;
    cout << "���� �������� �� ������ � ������� ��'������: " << sumBetweenFirstAndLastNegative << endl;
    return 0;
}