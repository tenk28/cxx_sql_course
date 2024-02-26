#include <stdio.h>

// #define SIZE_ARR 3 // SIZE_ARR = 3

int main() {
    const int size_arr = 3;
    int student_age[size_arr];
    student_age[0] = 18; // Illya
    student_age[1] = 18; // Illya
    student_age[2] = 19; // Ernest

    student_age[3] = 20; // Sasha (error)

    for (int i = 0; i < size_arr; ++i) {
        printf("Student %d age = %d\n", i + 1, student_age[i]);
    }

    return 0;
}
