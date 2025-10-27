#include <iostream>
#include <windows.h> // для підтримки української мови
#include <algorithm> // для sort()
#include <cmath>
using namespace std;

// Функція введення елементів масиву
void inputArray(int arr[], int n) {
    cout << "Введіть " << n << " цілих чисел:\n";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

// Функція виведення елементів масиву
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Функція обчислення суми квадратів від’ємних чисел
int sumOfSquaresNegatives(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            sum += arr[i] * arr[i];
    }
    return sum;
}

// Функція сортування масиву
void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 100; // максимальний розмір масиву
    int arr[SIZE];
    int n;

    cout << "Введіть кількість елементів (не більше 100): ";
    cin >> n;

    if (n > 0 && n <= SIZE) {
        inputArray(arr, n);

        cout << "\nПочатковий масив: ";
        printArray(arr, n);

        int result = sumOfSquaresNegatives(arr, n);
        cout << "\nСума квадратів від’ємних чисел = " << result << endl;

        sortArray(arr, n);
        cout << "\nВідсортований масив: ";
        printArray(arr, n);
    }
    else {
        cout << "Некоректна кількість елементів!" << endl;
    }

    return 0;
}
