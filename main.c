#include <stdio.h>

int main() {
    int vectorx[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  
    int matrix[2][2];

   
    int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    printf("Digite 4 números para preencher a matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    printf("\nMatriz 2x2 digitada:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz 3x3 fixa:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

   
    printf("\nElemento matrix[1][0]: %d\n", matrix[1][0]); 
    printf("Elemento matrix2[2][2]: %d\n", matrix2[2][2]); 

    return 0;
}
