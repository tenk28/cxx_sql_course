#include <iostream>

void printMatrix(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) { // rows
        for (int j = 0; j < 3; ++j) { // columns
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
   
    int arr[3][3] = { {1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9} };
    arr[2][2] = 10;
    arr[1][2] = 100;
    arr[2][0] = 1000;

    printMatrix(arr);

}