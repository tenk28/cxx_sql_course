#include <iostream>
#include <cmath>

double func(double x, double y) {
    double num = pow(x, 2) + 2.8*x + 0.35;
    double den = cos(2 * y) + 3.5;
    double result = num / den;
    return result;
}

int main() {
    double x, y;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    std::cout << func(x, y) << std::endl;
    return 0;
}
