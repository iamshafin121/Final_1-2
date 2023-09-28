#include <stdio.h>

int main(){

    char str[] = "Hello world!";
    char *ptr = str;

    int length = 0;
    for(length = 0 ; *(ptr+length) != '\0'; length++);
    printf("length : %d\n",length);

    return 0;
}