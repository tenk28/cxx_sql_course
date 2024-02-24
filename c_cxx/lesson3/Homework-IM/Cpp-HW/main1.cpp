#include <iostream>
#include <cmath>

double sum(double n, double x, double y){
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + (pow(i,x) + pow(y, i)) ;
    }
    return sum;
}

int main() {
    double n,x,y;

    do {
        std::cout << "Enter value for n(n >= 0): ";
        std::cin >> n;
    } while (!(n >= 0));

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    double result = sum(n, x, y);
    std::cout << " sum(n,x,y) = " <<  sum(n,x,y);

    return 0;
}
