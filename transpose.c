#include <stdio.h>

#define MAX_MATRIX_ROW_LEN 2
#define MAX_MATRIX_COL_LEN 3

#define MAX_MATRIX_TRANSPOSE_ROW_LEN 3
#define MAX_MATRIX_TRANSPOSE_COL_LEN 2

void print_transpose(int matrix[MAX_MATRIX_ROW_LEN][MAX_MATRIX_COL_LEN]){
    for(int i = 0; i < MAX_MATRIX_TRANSPOSE_ROW_LEN; i++){
        for(int j = 0; j < MAX_MATRIX_TRANSPOSE_COL_LEN; j++){
            printf("%d ", matrix[j][i]);
        }

        printf("\n");
    }
}

int main()
{
    int matrix[MAX_MATRIX_ROW_LEN][MAX_MATRIX_COL_LEN] = {
        {12, 27, 45},
        {11, 77, 34},
    };

    for (int i = 0; i < MAX_MATRIX_ROW_LEN; i++)
    {
        for (int j = 0; j < MAX_MATRIX_COL_LEN; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("now printing the transpose version: \n");

    print_transpose(matrix);

    printf("hai na super awesome?? hui hui hui\n");

    return 0;
}