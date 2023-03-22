#include <stdio.h>

#define MATRIX_ROW_LEN 3
#define MATRIX_COL_LEN 3

void l_to_r_diagonal_sum(int matrix[MATRIX_ROW_LEN][MATRIX_COL_LEN])
{
    int sum = 0;
    for (int i = 0, j = 2; i < MATRIX_ROW_LEN; i++, j--)
    {
        sum = sum + matrix[i][j];
    }
    printf("%d\n", sum);
    return;
}

int main()
{
    int matrix[MATRIX_ROW_LEN][MATRIX_COL_LEN] = {
        {1, 2, 3},
        {3, 2, 1},
        {0, 7, 6}};

    l_to_r_diagonal_sum(matrix);
    return 0;
}