#include <stdio.h>

int main(){

    int matrix_1[2][2] = {{1,2}, {4,5}};
    int matrix_2[2][2] = {{1,2}, {4,5}};

    int sum_matrix[2][2] = {0};


    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            sum_matrix[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
    printf("Printing summation of Arrray : \n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d  ",sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}