#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    const int arraySize = 10;
    int array[arraySize];
    for (int i = 0; i < arraySize; ++i) {
        array[i] = rand() % 10000;
    }
    cout << "Åëåìåíòè ìàñèâó: ";
    for (int i = 0; i < arraySize; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    int minElement = array[0];
    int maxElement = array[0];
    for (int i = 1; i < arraySize; ++i) {
        if (array[i] < minElement) {
            minElement = array[i];
        }

        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    cout << "Ì³í³ìàëüíèé åëåìåíò: " << minElement << endl;
    cout << "Ìàêñèìàëüíèé åëåìåíò: " << maxElement << endl;
    return 0;
}
