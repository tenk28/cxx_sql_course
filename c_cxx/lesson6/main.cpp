#include <iostream>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    delete[] arr;

    return 0;
}