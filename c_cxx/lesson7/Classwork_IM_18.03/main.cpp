#include <iostream>

const int N = 4;

void printMatrix(int array[N][N]){
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int findMax(int array[N][N]){
    int max = array[0][0];
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            if (array[i][j] > max){
                max = array[i][j];
            }
        }
    }
    return max;
}

int main() {
    int array[N][N] = { {1, 10, 1000, 7433},
                        {3, 10, 20, 94394},
                        {5739, 7474, 777, 77777},
                        {74343848, 3943939, 343433, 34838383}};
    array[0][0] = findMax(array);
    printMatrix(array);
    return 0;
}
