#include <iostream>
#include <cmath>
#include <optional>

std::optional<double>func(double x, double y){
    std::optional<double> result;
    if (x > 0 && x*y >1 ){
        result = (x+y)/(1-x*y);
    } else if (x == 0){
        result = (pow(x,2)- y) / (1 - x*y);
    } else {
        std::optional<double>();
    }
    return result;
}

int main(){
    double x, y;

    std::cout << "Enter x: ";
    std::cin >> x;

    std::cout<< "Enter y: ";
    std::cin>> y;

    std::optional<double> result = func(x,y);

    if(result.has_value()) {
        std::cout << "f(" << x << "," << y << ") = "
                  << result.value() << std::endl;
    } else {
        std::cout << "f(" << x << "," << y << ") doesn't exsist" << std::endl;
    }

    return 0;
}
