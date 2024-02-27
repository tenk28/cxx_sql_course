// #include <stdio.h>
#include <iostream>
#include <array>

const int SIZE_ARRAY = 7;

void printArr(std::array<int, SIZE_ARRAY> arr) {
    for(int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
        // printf("%d ", arr[i]);
    }
    // printf("\n");
    std::cout << std::endl;
}
// 1 2 3 4 5 -> shift -> 1 3 4 5 5
void shiftArray(std::array<int, SIZE_ARRAY>& arr, int index) {
    for(int i = index; i < arr.size() - 1; ++i) {
        arr[i] = arr[i + 1];
    }
}

int findMin(std::array<int, SIZE_ARRAY> arr) {
    int min = arr[0];
    int index_min = 0;
    for(int i = 1; i < arr.size(); ++i) {
        if(arr[i] < min) {
            min = arr[i];
            index_min = i;
        }
    }

    return index_min;
}

int main() {
    // int A[] = { 9, 2, 1, 8, 5, 6, 7 };
    // const int N = sizeof(A) / sizeof(A[0]);

    std::array<int, SIZE_ARRAY> A = { 9, 2, 1, 8, 5, 6, 7 };

    printArr(A);
    int index = findMin(A);
    shiftArray(A, index);
    printArr(A);

    return 0;
}