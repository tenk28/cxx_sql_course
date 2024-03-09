#include <iostream>
#include <array>
const int SIZE_ARRAY =7;

void printArr(std::array<int, SIZE_ARRAY> arr){
    for(auto element : arr ){
        std::cout << element << " ";
    }

    /*for (int i = 0; i < arr.size(); ++i ){
        std::cout << arr[i] << "";
    }*/

    std::cout << std::endl;
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

int findMax(std::array<int, SIZE_ARRAY> arr){
    int max = arr[0];
    int index_max = 0;
    for(int i = 1; i < arr.size(); ++i ){
        if (arr[i] > max){
            max = arr[i];
            index_max = i;
        }
    }
    return index_max;
}

void changeArray(std::array<int, SIZE_ARRAY>& arr, int index_max, int index_min) {

    int temp = arr[index_min];
    arr[index_min] = arr[index_max];
    arr[index_max] = temp;


}

int main() {
    std::array<int, SIZE_ARRAY> A = { 9, 2, 1, 8, 5, 6, 7 };

    printArr(A);
    int index_min = findMin(A);
    int index_max = findMax(A);
    changeArray(A, index_max, index_min);
    printArr(A);

    return 0;

}
