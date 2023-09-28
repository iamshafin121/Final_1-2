#include <stdio.h>

int main(){

    char str1[] = "Hello World!";
    char str2[] = "Hello World!";

    char *ptr1 = str1, *ptr2 = str2;

    int len1 = 0, len2 = 0;
    for(; *(ptr1+len1)!= '\0'; len1++);
    for(; *(ptr2+len2)!= '\0'; len2++);

    if(len1 == len2){
        int check = 0;
        for(int i=0; *(ptr1+i)!='\0'; i++){
            if(*(ptr1+i) != *(ptr2+i)){
                check = 1;
                break;
            }
        }
        if(check) printf("Strings are not same!\n");
        else printf("Both strings are same !!\n");
    }
    else{
        printf("Strings are not same!\n");
    }

    return 0;
}