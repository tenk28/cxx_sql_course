#include <stdio.h>

void increment(int* a) {
    (*a)++; // a = a + 1;
}

int main() {
    int a = 0;
    printf("a: %d\n", a);
    increment(&a);
    printf("after a: %d\n", a);
}