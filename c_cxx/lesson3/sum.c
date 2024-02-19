#include <stdio.h>
#include <math.h>

int sum(int n, int x) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum = sum + pow(x, i);
    }
    return sum;
}

int main() {
    int n;
    int x;

    do {
        printf("Enter value for n(n >= 0): ");
        scanf("%d", &n);
    } while(!(n >= 0));

    printf("Enter value for x: ");
    scanf("%d", &x);

    int result = sum(n, x);
    printf("sum(n=%d, x=%d) = %d\n", n, x, sum(n, x));

    return 0;
}
