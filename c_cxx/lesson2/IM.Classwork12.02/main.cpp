#include <iostream>
#include <cmath>

void func(double a, double b, double c){
    if (a < b + c && b < a+c && c < a+ b){
        std::cout << "result can't build"<< std::endl;
    } else if (a == b && a == c){
        std::cout << "result rivnobichnui " << std::endl;
    } else if (a == b || a == c || b == c){
        std::cout << "result rivnobedrenui" << std::endl;
    } else {
        std::cout << "Result normall" << std::endl;
    }



}

int main() {
    double a,b,c;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;

    std::cout << "Enter b: " << std::endl;
    std::cin >> b;

    std::cout << "Enter c: " << std::endl;
    std::cin >> c;

    func(a,b,c);
    return 0;
}
