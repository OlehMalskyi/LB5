// Lab_05_1.cpp
// < Мальський Олег >
// Лабораторна робота № 5.1
// Функції, що містять арифметичний вираз
// Варіант 15

#include <iostream>
#include <math.h>
#include <cmath>



using namespace std;

double h(const double s, const double b);


int main()
{
    double s, t;

    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    double c = h(s, t * t) + h(t, 1 + s * s) / 1 + h(s * t, 1);

    cout << "c = " << c << endl;

    return 0;
}


double h(const double x, const double y)
{
    return (x * x + sin(x) * y + y * y) / (1 + x * x + y * y);
}
