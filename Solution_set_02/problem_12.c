#include <stdio.h>

int main(){

    char str_1[] = "Hello World!";
    char str_2[50];

    char *ptr_1 = str_1;
    char *ptr_2 = str_2;


    while(*ptr_1 != '\0'){
        *ptr_2 = *ptr_1;
        ptr_2++;
        ptr_1++;
    }

    printf("String 1: %s\n",str_1);
    printf("String 2: %s\n",str_2);


    return 0;
}