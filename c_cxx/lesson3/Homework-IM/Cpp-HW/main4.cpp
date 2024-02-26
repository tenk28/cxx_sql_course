#include <iostream>

int sum(int n, int x){
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + (x + i);
    }
    return sum;
}

int main() {
    int n,x;

    do {
        std::cout << "Enter value for n(n >= 0): ";
        std::cin >> n;

    } while (!(n >= 0));

    std::cout << "Enter x: ";
    std::cin >> x;


    int result = sum(n, x);
    std::cout << " sum(n,x) = " << sum(n,x);

    return 0;
}