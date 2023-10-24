#include <iostream>
#include <locale>
#include "windows.h"

using namespace std;

// ������� ��� ���������� ���� ���� �����
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

// ������� ��� ���������� ������� ���� � ����
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 1 + countDigits(n / 10);
    }
}

// ������� ��� ����������� ����������� �����
int findMaxDigit(int n) {
    if (n < 10) {
        return n;
    }
    else {
        int maxRest = findMaxDigit(n / 10);
        int lastDigit = n % 10;
        return (lastDigit > maxRest) ? lastDigit : maxRest;
    }
}

// ������� ��� ����������� �������� �����
int findMinDigit(int n) {
    if (n < 10) {
        return n;
    }
    else {
        int minRest = findMinDigit(n / 10);
        int lastDigit = n % 10;
        return (lastDigit < minRest) ? lastDigit : minRest;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    cout << "������ ���� �����: ";
    cin >> num;

    int sum = sumOfDigits(num);
    int numDigits = countDigits(num);
    int maxDigit = findMaxDigit(num);
    int minDigit = findMinDigit(num);

    cout << "���� ����: " << sum << endl;
    cout << "ʳ������ ����: " << numDigits << endl;
    cout << "����������� �����: " << maxDigit << endl;
    cout << "̳������� �����: " << minDigit << endl;

    return 0;
}
