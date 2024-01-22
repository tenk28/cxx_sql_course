#include <stdio.h> // printf, scanf (iostream)
#include <math.h> // all mathes functions

double func(double x, double y) {
    double num = 3.5 * pow(x, 2) + 1;
    double den = cos(2 * y);
    return (log(x) + num / den);
}

int main() {
    // std::cout -> printf
    // std::cin -> scanf
    double x, y;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

    printf("f(%lf, %lf) = %lf\n", x, y, func(x, y));
    return 0;
}
