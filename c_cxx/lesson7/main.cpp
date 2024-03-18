// static
// C/C++
// int array[5];
// C++
// std::array<int, 5> array; // #include <array>

// dynamic
// C/C++
// malloc, calloc, realloc, free
// C++
// new, new[], delete, delete[]
// int* single_int = new int;
// C++/structure
// std::vector<int> array;

#include <iostream>
#include <vector>

void printArr(const std::vector<int>& arr) {
    for(int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
        // printf("%d ", arr[i]);
    }
    // printf("\n");
    std::cout << std::endl;
}

// 1 2 3 4 5 -> shift -> 1 3 4 5 5
void shiftArray(std::vector<int>& arr, int index) {
    for(int i = index; i < arr.size() - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr.pop_back();
}

void shiftArrayPointer(std::vector<int>* arr, int index) {
    for(int i = index; i < arr->size() - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr->pop_back();
}

// int findMin(std::array<int, SIZE_ARRAY> arr) {
//     int min = arr[0];
//     int index_min = 0;
//     for(int i = 1; i < arr.size(); ++i) {
//         if(arr[i] < min) {
//             min = arr[i];
//             index_min = i;
//         }
//     }

//     return index_min;
// }

int main() {
    // int A[] = { 9, 2, 1, 8, 5, 6, 7 };
    // const int N = sizeof(A) / sizeof(A[0]);

    std::vector<int> A = { 9, 2, 1, 8, 5, 6, 7 };

    printArr(A);
    int index;
    std::cin>>index;
    // shiftArray(A, index);
    shiftArrayPointer(&A, index);
    printArr(A);

    return 0;
}