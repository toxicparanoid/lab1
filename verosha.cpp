#include <iostream>
#include <cmath>

class Rectangle {

private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double perimeter() {
        return 2 * (length + width);
    }

    double area() {
        return length * width;
    }

    double diagonalLength() {
        return sqrt(pow(length, 2) + pow(width, 2));
    }

    void displayParameters() {
        setlocale(LC_ALL, "Russian");
        std::cout << "Периметер: " << perimeter() << std::endl;
        std::cout << "Площадь: " << area() << std::endl;
        std::cout << "Средняя линия: " << diagonalLength() << std::endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    double length, width;
    std::cout << "Введите длину: ";
    std::cin >> length;
    std::cout << "Введите ширину: ";
    std::cin >> width;

    Rectangle rect(length, width); // create a rectangle with user-input length and width
    rect.displayParameters(); // display the parameters of the rectangle
    return 0;
}