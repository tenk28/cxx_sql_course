#include "iostream"
#include "cmath"

double func(double a, double x, double b, double e){
    double num = asin (pow(a, 2));
    double den = acos ( (b*x)-a );
    double thr = pow(e, b*x);
    double result = num + den + thr;
    return result;

}

int main() {
    double a, x, b, e;
    std::cout << "Enter a";
    std::cin >> a;

    std::cout << "Enter x";
    std::cin >> x;

    std::cout << "Enter b";
    std::cin >> b;

    std::cout << "Enter e";
    std::cin >> e;

    std::cout << func(x, a, b, e) << std::endl;
    return 0;
};
