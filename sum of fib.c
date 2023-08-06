#include <stdio.h>

int main() {
    int n, i;
    long long int fib[50];

    printf("Enter the number of terms in the Fibonacci series (up to 50): ");
    scanf("%d", &n);

    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%lld ", fib[i]);
    }

    long long int sum = 0;
    for (i = 0; i < n; i++) {
        sum += fib[i];
    }

    printf("\nSum of the Fibonacci series: %lld\n", sum);

    return 0;
}
