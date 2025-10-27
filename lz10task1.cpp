#include <iostream>
#include <windows.h> // ��� �������� ��������� ����
#include <algorithm> // ��� sort()
#include <cmath>
using namespace std;

// ������� �������� �������� ������
void inputArray(int arr[], int n) {
    cout << "������ " << n << " ����� �����:\n";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
}

// ������� ��������� �������� ������
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// ������� ���������� ���� �������� �䒺���� �����
int sumOfSquaresNegatives(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0)
            sum += arr[i] * arr[i];
    }
    return sum;
}

// ������� ���������� ������
void sortArray(int arr[], int n) {
    sort(arr, arr + n);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 100; // ������������ ����� ������
    int arr[SIZE];
    int n;

    cout << "������ ������� �������� (�� ����� 100): ";
    cin >> n;

    if (n > 0 && n <= SIZE) {
        inputArray(arr, n);

        cout << "\n���������� �����: ";
        printArray(arr, n);

        int result = sumOfSquaresNegatives(arr, n);
        cout << "\n���� �������� �䒺���� ����� = " << result << endl;

        sortArray(arr, n);
        cout << "\n³����������� �����: ";
        printArray(arr, n);
    }
    else {
        cout << "���������� ������� ��������!" << endl;
    }

    return 0;
}
