#include <stdio.h>

void find_max_min(int a, int b);

int main(){
     
    int num1, num2;
    printf("Enter number 01 : ");
    scanf("%d",&num1);
    printf("Enter number 02 : ");
    scanf("%d",&num2);

    find_max_min(num1,num2);
     
    return 0;
}

void find_max_min(int a, int b){
    if(a>b){
        printf("Max = %d\n",a);
        printf("Min = %d\n",b);
    }
    else{
        printf("Max = %d\n",b);
        printf("Min = %d\n",a);
    }
}