#include <stdio.h>

int main(){


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = arr;
    int len = (sizeof(arr)/sizeof(arr[0]))-1;
    for(int i=0; i<len; i++,len--){
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+len);
        *(ptr+len) = temp;
    }

    printf("Printing reverse array : ");
    for(int i=0; i<10; i++){
        printf("%d\t",*(ptr+i));
    }

    return 0;
}