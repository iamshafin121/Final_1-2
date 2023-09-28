#include <stdio.h>

int main(){

    int x = 5, y = 10;
    int *a = &x, *b = &y;
    printf("%d + %d = %d\n",x,y,*a+*b);

    return 0;
}