#include <stdio.h>

int calculate_natural_numbers(int n);

int main(){
     
    int total = calculate_natural_numbers(20);
    printf("Sum of First 20 natural number is : %d\n",total);
     
    return 0;
}

int calculate_natural_numbers(int n){
    if(n==1) return 1;
    else return calculate_natural_numbers(n-1) + n;
}