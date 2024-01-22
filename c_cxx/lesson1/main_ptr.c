#include <stdio.h> // printf () iostream
#include <math.h> // all mathes functions

int main() {
    // std::cout -> printf
    // std::cin -> scanf
    double x = 1, y;
    double* ptr_x = &x;
    
    printf("Pointer: %p\n", ptr_x);
    printf("Value: %lf\n", x);
    *ptr_x = 5;
    printf("Value: %lf\n", x);

    return 0;
}
