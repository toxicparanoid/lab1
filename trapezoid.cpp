#include <iostream>
using namespace std;

// Функция для вычисления периметра трапеции
double Perimetr(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Функция для вычисления площади трапеции
double Ploshad(double a, double b, double h) {
    return 0.5 * (a + b) * h;
}

// Функция для вычисления длины средней линии трапеции
double MidLine(double a, double b) {
    return (a + b) / 2;
}

int main() {
    setlocale(LC_ALL, "rus");
    double a, b, c, d, h;

    cout << "Введите длины оснований трапеции: " << endl;
    cin >> a >> b;

    cout << "Введите длины катетов трапеции: " << endl;
    cin >> c >> d;

    cout << "Введите высоту трапеции: " << endl;
    cin >> h;

    cout << "Периметр  трапеции: " << Perimetr(a, b, c, d) << endl;
    cout << "Площадь  трапеции: " << Ploshad(a, b, h) << endl;
    cout << "Длина средней линии трапеции: " << MidLine(a, b) << endl;

    return 0;
}