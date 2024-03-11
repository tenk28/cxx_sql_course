#include <cmath>
#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const size_t SIZE_ARRAY = 8;

bool checkIfEven(int value);
int findMax(std::array<int, SIZE_ARRAY> arr);
int findMin(std::array<int, SIZE_ARRAY> arr);

int main() {
    std::array<int, SIZE_ARRAY> A = { 9, 2, 1, 8, 1000, 5, 6, 7 };

    if (checkIfEven(A.size())) {
        std::cout << "Max element: " << findMax(A) << std::endl;
    } else {
        std::cout << "Min element: " << findMin(A) << std::endl;
    }
    
    return 0;
}

bool checkIfEven(int value) {
    return (value % 2 == 0);
}

int findMax(std::array<int, SIZE_ARRAY> arr)
{
    int max = arr[0];
    for(int i = 1; i < arr.size(); ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMin(std::array<int, SIZE_ARRAY> arr)
{
    int min = arr[0];
    for(int i = 1; i < arr.size(); ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
