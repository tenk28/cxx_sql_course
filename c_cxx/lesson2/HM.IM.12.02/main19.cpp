#include <iostream>
#include <cmath>

 double func(double x, double y){
    double result = 1;
    if (x > 0 && y > 0){
        result = (x + y)/ x*y + pow(x,3 );
    } else if (x == 0){
        result = 3.14 * y;
    } else if (y == 0){
        result = pow(x,2);
    }
    return result;
}

int main2(){
    double x, y;
    std::cout<< "Enter x: ";
    std::cin >> x;

    std::cout<< "Enter y: ";
    std::cin >> y;

    double value = func(x, y);

    std::cout << "f(" << x << ", " << y << ") = " << value << std::endl;

    return 0;
}