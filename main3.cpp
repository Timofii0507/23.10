#include <iostream>
#include <Windows.h>
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
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    double sum_of_negatives = 0;
    double product_between_min_max = 1;
    double product_of_even_indexed_elements = 1;
    double sum_of_elements_between_first_and_last_negative = 0;
    double min = numeric_limits<double>::max();
    double max = numeric_limits<double>::min();
    int min_index = -1;
    int max_index = -1;
    int first_negative_index = -1;
    int last_negative_index = -1;
    for (int i = 0; i < N; ++i) {
        if (arr[i] < 0) {
            sum_of_negatives += arr[i];
            if (first_negative_index == -1) {
                first_negative_index = i;
            }
            last_negative_index = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
        if (i % 2 == 0) {
            product_of_even_indexed_elements *= arr[i];
        }
    }
    if (first_negative_index != -1 && last_negative_index != -1) {
        for (int i = first_negative_index + 1; i < last_negative_index; ++i) {
            sum_of_elements_between_first_and_last_negative += arr[i];
        }
    }
    if (min_index < max_index) {
        for (int i = min_index + 1; i < max_index; ++i) {
            product_between_min_max *= arr[i];
        }
    }
    else {
        for (int i = max_index + 1; i < min_index; ++i) {
            product_between_min_max *= arr[i];
        }
    }
    cout << "\nРезультати:\n";
    cout << "Сума від'ємних елементів: " << sum_of_negatives << endl;
    cout << "Добуток елементів, що знаходяться між min і max елементами: " << product_between_min_max << endl;
    cout << "Добуток елементів з парними номерами: " << product_of_even_indexed_elements << endl;
    cout << "Сума елементів, що знаходяться між першим і останнім від'ємними елементами: " << sum_of_elements_between_first_and_last_negative << endl;
    return 0;
}