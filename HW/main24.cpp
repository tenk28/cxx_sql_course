#include <iostream>
#include <cmath>

double func(double x, double y, double e){
    double num = sin ( 2*x + y) + pow(y, 2);
    double den = pow(e,y) + x;
    double result = num / den;
    return result;

}

int main() {
    double x,y,e;
    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    std::cout << "Enter e: ";
    std::cin >> e;

    std::cout << func(x, y, e) << std::endl;
    return 0;

}