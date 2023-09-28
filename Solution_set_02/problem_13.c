#include <stdio.h>

int main(){

    char str1[50] = "Hello " ;
    char str2[] = "World!" ;
    char *ptr1 = str1;
    char *ptr2 = str2;

    int len = 0;
    for(; *(ptr1+len) != '\0'; len++);

    printf("length : %d\n",len);
    for(int i=0; *(ptr2+i) != '\0'; i++,len++){
        *(ptr1+len) =  *(ptr2+i);
    }
    *(ptr1+len) = '\0';
    printf("Concatenated string is : %s\n",ptr1);

    return 0;
}