#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int* arr = malloc(size * sizeof(int));
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}