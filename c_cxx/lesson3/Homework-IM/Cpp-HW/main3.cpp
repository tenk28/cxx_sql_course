/*#include <iostream>

int factorial_while(int value) {
    int fact = 1;
    int n = 1;
    while (n <= value) {
        fact = fact * n;
        ++n;
    }
    return fact;
}

int sum(int n, int x){
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
         sum = sum + factorial_while(x);
    }
    return sum;
}

int main() {
    int n,x;
    do {
        std::cout << "Enter value for n(n >= 0): ";
        std::cin >> n;
        std::cout << "Enter x: ";
        std::cin >> x;
    } while (!(n >= 0));

    int result = sum(n, x);

    std::cout << " sum(n,x) = " << sum(n,x);

    return 0;
}
*/