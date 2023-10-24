#include <iostream>
#include <locale>
#include "windows.h"

using namespace std;

// Функція для обчислення суми цифр числа
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return n % 10 + sumOfDigits(n / 10);
    }
}

// Функція для обчислення кількості цифр у числі
int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    else {
        return 1 + countDigits(n / 10);
    }
}

// Функція для знаходження максимальної цифри
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

// Функція для знаходження мінімальної цифри
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
    cout << "Введіть ціле число: ";
    cin >> num;

    int sum = sumOfDigits(num);
    int numDigits = countDigits(num);
    int maxDigit = findMaxDigit(num);
    int minDigit = findMinDigit(num);

    cout << "Сума цифр: " << sum << endl;
    cout << "Кількість цифр: " << numDigits << endl;
    cout << "Максимальна цифра: " << maxDigit << endl;
    cout << "Мінімальна цифра: " << minDigit << endl;

    return 0;
}
