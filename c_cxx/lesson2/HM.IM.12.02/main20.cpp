#include <iostream>
#include <cmath>


double func (double x, double y){
    double result = 1;
    if (x > 0 && x*y >1 ){
        result = (x+y)/(1-x*y);
    } else if (x == 0){
        result = (pow(x,2)- y) / (1 - x*y);
    }
    return result;
}

int main4 (){
    double x,y;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout << "Enter y: ";
    std::cin >> y;

    double value = func(x, y);

    std::cout << "f(" << x << ", " << y << ") = " << value << std::endl;

    return 0;

}