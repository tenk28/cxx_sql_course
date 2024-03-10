#include "iostream"
#include "cmath"

double func (double t, double y){
    double num = sin((2*t+1)*(2*t+1)+(0.3));
    double den = log(t + y);
    double result = num / den;
    return result;

}

int main(){
    double t,y;

    std::cout<<"Enter t: "<<std::endl;
    std::cin>> t;

    std::cout<<"Enter y: "<<std::endl;
    std::cin>> y;

    std::cout << func(t,y ) << std::endl;
    return 0;
}