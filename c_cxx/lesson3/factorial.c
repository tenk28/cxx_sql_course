#include <stdio.h>

int factorial(int value) {
    int fact = 1;
    for (int n = 1; n <= value; ++n) {
        fact = fact * n;
    }
    return fact;
}

int factorial_while(int value) {
    int fact = 1;
    int n = 1;
    while (n <= value) {
        fact = fact * n;
        ++n;
    }
    return fact;
}

int main() {
    int value;

    do {
        printf("Enter value for factorial(value >= 0): ");
        scanf("%d", &value);
    } while(!(value >= 0));

    int result = factorial(value);
    printf("%d! = %d\n", value, result);

    return 0;
}
