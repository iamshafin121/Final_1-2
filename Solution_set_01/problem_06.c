#include <stdio.h>

void print_reverse(int num);

int main(){
    int num;
    printf("Enter any number for reverse : ") ;
    scanf("%d",&num);
    print_reverse(num);
     
    return 0;
}
void print_reverse(int num){

    if(num){
        printf("%d",num%10);
        num /= 10;
        print_reverse(num);
    }

}