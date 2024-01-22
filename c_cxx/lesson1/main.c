#include <stdio.h> // printf () iostream
#include <math.h> // all mathes functions

double func(double x, double y) {
    double num = 3.5 * pow(x, 2) + 1;
    double den = cos(2 * y);
    return (log(x) + num / den);
}

int main() {
    // std::cout -> printf
    // std::cin -> scanf
    double x = 1, y;

    printf("Enter x: \n\n");
    printf("x = %lf, %lf\n", x, 12.01);
    //scanf("%lf", &x);

    //printf("Hello World!!!\n");
    return 0;
}
