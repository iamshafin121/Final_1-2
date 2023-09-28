#include <stdio.h>

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;

    int n, check=0;
    printf("Enter the element you want to search : ");
    scanf("%d",&n);

    for(int i=0; i<10; i++){
        if(n==*(ptr+i)){
            check = 1;
            break;
        }
    }
    if(check) printf("Given element present in the array!!\n");
    else printf("Given element doesn't exist in the array!!\n");

    return 0;
}