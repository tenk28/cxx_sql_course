#include "iostream"
#include "cmath"

double func(double x, double y, double e){
    double num = (log(x - y) + pow(y, 4));
    double den = pow(e, 2) + (2.33 * pow(x,2 ));
    double result = num / den;
    return result;
}

int main(){
    double x,y ,e;

    std::cout<< "Enter x: "<< std::endl;
    std::cin>> x;

    std::cout<< "Enter y: "<< std::endl;
    std::cin>> y;

    std::cout<< "Enter e: "<< std::endl;
    std::cin>> e;

    std::cout<< func(x,y,e)<<std::endl;

}