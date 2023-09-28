#include <stdio.h>

int sum_of_digits(int n);

int main(){
     
    int num;
    scanf("%d",&num);

    int sum = sum_of_digits(num);

    printf("Sum of digits %d is  : %d\n",num,sum);
     
    return 0;
}

int sum_of_digits(int n){
    static int sum = 0;
    if(n>9){
        sum += n%10;
        n /= 10;
        sum_of_digits(n);
    }
    else{
        sum += n;
    }
    return sum;
}