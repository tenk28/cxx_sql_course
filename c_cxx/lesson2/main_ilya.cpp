#include <iostream>
#include <cmath>
#include <optional>

std::optional<double> func(double x){
    std::optional<double> result;
    if (x > 0 && x < 4  ){
        result = 4 - pow(x,2);
    } else if(x == 0) {
        result = 0;
    } else if(x < 0){
        result = pow(x, 3);
    } else {
        return std::optional<double>();
    }
    return result;

}

int main (){
    double x;

    std::cout<< "Enter x: ";
    std::cin >> x;

    std::optional<double> result = func(x);

    if(result.has_value()) {
        std::cout << "f(" << x << ") = ";
    } else {
        std::cout << "Argument " << x << "not valid" << std::endl;
    }
    return 0;
}