#include <stdio.h>

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array; 
    int n = sizeof(array) / sizeof(array[0]); 
    int sum = 0;

    
    for (int i = 0; i < n; i++) {
        sum += *ptr; 
        ptr++; 
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
