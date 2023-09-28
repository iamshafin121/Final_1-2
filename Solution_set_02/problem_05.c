#include <stdio.h>

int main(){

    int arr_1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr_2[10];

    int *ptr_1 = arr_1;
    int *ptr_2 = arr_2;

    for(int i=0; i<10; i++){
        *(ptr_2+i) = *(ptr_1+i);
    }
    printf("Copied array elements are : ");
    for(int i=0; i<10; i++){
        printf("%d\t",*(ptr_2+i));
    }

    return 0;
}