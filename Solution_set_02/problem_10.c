#include <stdio.h>

int main(){

    int matrix_1[3][2] = {{1,4},{2,5},{3,6}};
    int matrix_2[2][3] = {{1,3,5},{2,4,6}};

    int mul_matrix[3][3] = {0};
    int sum = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<2; k++){
                sum += matrix_1[i][k] * matrix_2[k][j];
            }
            mul_matrix[i][j] = sum;
            sum = 0;
        }
    }

    printf("Multiply matrix is : \n");

    for (int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",mul_matrix[i][j]);
        }
        printf("\n");
    }



    return 0;
}
