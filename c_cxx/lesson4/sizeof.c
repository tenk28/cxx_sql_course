#include <stdio.h>

int main() {
    int int_value = 1;
    double double_value = 1;
    float float_value = 1;
    char char_value = 'a';

    int int_arr_value[3];
    char char_arr_value[5];

    const int size_arr = sizeof(int_arr_value) / sizeof(int_arr_value[0]);

    printf("sizeof(int_value): %d\n", sizeof(int_value)); // 2/4
    printf("sizeof(double_value): %d\n", sizeof(double_value)); // 8
    printf("sizeof(float_value): %d\n", sizeof(float_value)); // 4
    printf("sizeof(char_value): %d\n", sizeof(char_value)); // 1

    printf("sizeof(int_arr_value): %d\n", sizeof(int_arr_value));
    printf("sizeof(char_arr_value): %d\n", sizeof(char_arr_value));
}