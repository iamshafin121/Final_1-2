#include <stdio.h>
int fibonacci(int n);

int main() {
    int terms;
    
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &terms);
    
    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}