#include <stdio.h> 
 
void printArr(int arr[], const int arr_size) { 
    for(int i = 0; i < arr_size; ++i) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
 
void keepElement(int arr[], const int arr_size, int chosen_value) { 
    int index = 0;
    for(int i = 0; i < arr_size; ++i) {
        if(arr[i] == chosen_value) {
            arr[index++] = arr[i];
        }
    }
    for(int i = index; i < arr_size; ++i) {
        arr[i] = 0; // замінити не потрібні значення
    }
}

int main() {
    int A[] = { 9, 2, 1, 8, 5, 6, 7 };
    const int N = sizeof(A) / sizeof(A[0]);

    printArr(A, N);
    int chosen_value = 5; // обрати значення
    keepElement(A, N, chosen_value);
    printArr(A, N);

    return 0;
}
