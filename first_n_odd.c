#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= (2 * n - 1); i += 2) {
        sum += i;
    }
    int n_squared = n * n;
    if (sum == n_squared) {
        printf("The sum of the first %d odd numbers is %d, which is equal to %d^2.\n", n, sum, n);
    }
    else {
        printf("The sum of the first %d odd numbers is %d, which is not equal to %d^2.\n", n, sum, n);
    }

    return 0;
}
