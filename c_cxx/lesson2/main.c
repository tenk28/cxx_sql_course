#include <stdio.h>
#include <math.h>

double func(double x) {
    double result;
    if (x > 0 && x < 4) {
        result = 4 - pow(x, 2);
    } else if (x == 0) {
        result = 0;
    } else if (x < 0) {
        result = pow(x, 3);
    }
    return result;
}

int main() {
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("f(%.2lf) = %.2lf\n", x, func(x));
    return 0;
}
