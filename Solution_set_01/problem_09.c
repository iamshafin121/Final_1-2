#include <stdio.h>
#include <math.h>

void prime();
void Armstrong();
void Perfect();

int main(){
     
    int num;
    do{
        printf("\n1. Prime\n");
        printf("2. Armstrong\n");
        printf("3. Perfect\n");
        printf("4. Exit\n");
        printf("\nChoose any option :  ");
        scanf("%d",&num);

        switch(num){
            case 1 : prime();
                    break;
            case 2 : Armstrong();
                    break;
            case 3 : Perfect();
                    break;
        }
    }while(num != 4);
     
    return 0;
}

void prime(){
    int num, prime = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>1){
        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                prime = 0;
                break;
            }
        }
        if(prime) printf("Given number %d is a Prime number.\n",num);
        else printf("Given number %d is not a Prime number.\n",num);
    }
    else{
        printf("Given number %d is not a Prime number.\n",num);
    }
}

void Armstrong(){
  int num, org_num, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);
   for (org_num = num; org_num != 0; ++n) org_num /= 10;
   for (org_num = num; org_num != 0; org_num /= 10) {
       remainder = org_num % 10;
       result += pow(remainder, n);
   }

    if ((int)result == num)
    printf("Given number %d is an Armstrong number.\n", num);
   else
    printf("Given number %d is not an Armstrong number.\n", num);
}

void Perfect(){
    int num, sum = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1; i<=num/2; i++){
        if(num%i==0) sum += i;
    }
    if(sum==num) printf("Given number %d is a Perfect number.\n",num);
    else printf("Given number %d is not a perfect number.\n",num);

}