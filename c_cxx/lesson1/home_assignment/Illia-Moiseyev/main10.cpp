#include "iostream"
#include "cmath"

double func(double x, double y){
    double num = cos(4* pow(x,2 ));
    double den = sqrt(pow(y,2 )+ 28.61);
    double result = num + den;
    return result;

}

int main(){
    double x,y;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;

    std::cout << "Enter y: " << std::endl;
    std::cin >> y;

    std::cout << func(x,y ) << std::endl;

    return 0;

}