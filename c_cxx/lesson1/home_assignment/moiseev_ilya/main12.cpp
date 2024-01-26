#include "iostream"
#include "cmath"

double func(double b, double x, double a, double z){
    double num = pow(cos(1), 2)* (b* pow(x, 5));
    double num1 = sin(pow(a, 2)* cos(pow(x,3 )+ pow(z, 5) - pow(a,2)));
    double result = num - num1;
    return result;


}

int main(){
    double b,x,a,z;

    std::cout<< "Enter b: "<< std::endl;
    std::cin >> b;

    std::cout<< "Enter x: "<< std::endl;
    std::cin >> x;

    std::cout<< "Enter a: "<< std::endl;
    std::cin >> a;

    std::cout<< "Enter z: "<< std::endl;
    std::cin >> z;


    std::cout<< func(b, x, a, z)<< std::endl;

}