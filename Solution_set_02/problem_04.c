#include <stdio.h>

int main(){

    int arr[10];
    int *ptr = arr;
    printf("Enter 10 integer array Element : ");
    for(int i=0; i<10; i++){
        scanf("%d",(ptr+i));
    }
    printf("Printing the array Element : ");
    for(int i=0; i<10; i++){
        printf("%d\t",*(ptr+i));
    }


    return 0;
}