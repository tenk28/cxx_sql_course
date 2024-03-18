// static
// C/C++
// int array[5] 
// C++
// std::array<int, 5> array; #include <array>


// dynamic
// C/C++
// malloc, calloc, realloc, free
// C++
// new, new[], delete, delete[]
// int* single_int = new int;
// C++/structure
// std::vector<int> array;








#include <iostream>

const int N = 4;

void showMatrix(int array[N][N]){
    for (int i = 0; i < N; ++i){
        for (int g = 0; g < N; ++g){
            std::cout << array[i][g] << " ";
        }
        std::cout << std::endl;
    }
}

int findMax(int array[N][N]){
    int max = array[0][0];
    for (int i = 0; i < N; ++i){
        for (int g = 0; g < N; ++g){
            if (array[i][g] > max){
                max = array[i][g];
            }
        }
    }
    return max;
}

int main() {
    int array[N][N] = { {132, 109, 145, 73},
                        {343, 1430, 258, 994},
                        {573, 774, 797, 694},
                        {243, 228, 1011, 3483}};
    array[0][0] = findMax(array);
    showMatrix(array);
    return 0;
}