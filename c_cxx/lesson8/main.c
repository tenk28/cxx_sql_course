#include <stddef.h>
#include <stdio.h>

void printArray(int A[], size_t size) {
    for (size_t i = 0; i < size; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubbleSort(int A[], size_t size) {
    size_t count_iteration = 0;
    for (size_t i = 0; i < size - 1; ++i) {
        for(size_t j = 0; j < size - i - 1; ++j) {
            if (A[j] > A[j + 1]) {
                int buff = A[j];
                A[j] = A[j + 1];
                A[j + 1] = buff;
            }
            ++count_iteration;
        }
    }
    printf("count_iteration: %d\n", count_iteration);
}

int main() {
    int A[] = { 1, 5, 3, 2, 6, 9, 5 };
    const size_t N = sizeof(A) / sizeof(A[0]);

    printArray(A, N);
    bubbleSort(A, N);
    printArray(A, N);

    return 0;
}