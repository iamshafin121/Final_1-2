#include <stdio.h>
void call_by_value_swap(int a, int b);
void call_by_reference_swap(int *a, int *b);


int main(){
     
    int A = 5, B = 10;
    printf("Before using call by value swap A = %d B = %d\n",A,B);
    call_by_value_swap(A,B);
    printf("After using call by value swap A = %d B = %d\n",A,B);
    
    int a = 5, b = 10;
    printf("Before using call by reference swap A = %d B = %d\n",a,b);
    call_by_reference_swap(&a,&b);
    printf("After using call by reference swap A = %d B = %d\n",a,b);

    return 0;
}
void call_by_value_swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void call_by_reference_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}