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
    cout << "Введіть кількість елементів у масиві: ";
    cin >> N;
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < N; ++i)
    {
        cout << "Елемент " << i + 1 << ": ";
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
    cout << "\nРезультати:\n";
    cout << "Сума від'ємних елементів: " << sumOfNegatives << endl;
    cout << "Добуток елементів між min і max: " << productBetweenMinMax << endl;
    cout << "Добуток елементів з непарними номерами: " << productOfEvenIndexes << endl;
    cout << "Сума елементів між першим і останнім від'ємними: " << sumBetweenFirstAndLastNegative << endl;
    return 0;
}