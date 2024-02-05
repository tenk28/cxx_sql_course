#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool func(double x, double* result) {
    if (x > 0 && x < 4) {
        *result = 4 - pow(x, 2);
    } else if (x == 0) {
        *result = 0;
    } else if (x < 0) {
        *result = pow(x, 3);
    } else {
        return false;
    }

    return true;
}

int main() {
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);

    double result;
    if(func(x, &result)) {
        printf("f(%.2lf) = %.2lf\n", x, result);
    } else {
        printf("Argument %.2lf not valid\n", x);
    }

    return 0;
}
