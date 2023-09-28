#include <stdio.h>

void even_or_odd(int num);
int main(){
     
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    even_or_odd(num);
     
    return 0;
}
void even_or_odd(int num){
    if(num&1){
        printf("Given number is an odd number.\n");
    }
    else{
        printf("Given number is a even number.\n");
    }
}