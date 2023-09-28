#include <stdio.h>
void add();
void sub();
void mul();
void divide();
void main(){
    int n;
    do{
        printf("\n1. Add two number.\n");
        printf("2. Subtract two number.\n");
        printf("3. Multiply two number.\n");
        printf("4. Divide two number.\n");
        printf("5. Exit!!\n");
        
        
        printf("\nEnter any option : ");
        scanf("%d",&n);
        
        switch(n){
            case 1  :add();
                     break;
            case 2  :sub();
                     break;
            case 3  :mul();
                     break;
            case 4  :divide();
                     break;
        }
        
    }while(n>0 && n!=5);
    
    return 0;
}

void add(){
    int num1, num2;
    printf("Enter number 01: ");
    scanf("%d",&num1);
    printf("Enter number 02: ");
    scanf("%d",&num2);

    printf("\n%d + %d = %d\n",num1,num2,num1+num2);
}

void sub(){
    int num1, num2;
    printf("Enter number 01: ");
    scanf("%d",&num1);
    printf("Enter number 02: ");
    scanf("%d",&num2);

    printf("\n%d - %d = %d\n",num1,num2,num1-num2);
}

void mul(){
    int num1, num2;
    printf("Enter number 01: ");
    scanf("%d",&num1);
    printf("Enter number 02: ");
    scanf("%d",&num2);

    printf("\n%d * %d = %d\n",num1,num2,num1*num2);
}

void divide(){
    int num1, num2;
    printf("Enter number 01: ");
    scanf("%d",&num1);
    printf("Enter number 02: ");
    scanf("%d",&num2);

    printf("\n%d / %d = %d\n",num1,num2,num1/num2);
}
