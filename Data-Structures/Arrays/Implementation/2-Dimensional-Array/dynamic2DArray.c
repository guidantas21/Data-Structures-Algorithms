#include <stdio.h>
#include <stdlib.h>

int **createMatrix(int m,int n, int fillNumber) {
    int **matrix = malloc(sizeof(int *) * m);

    for (int i = 0; i < m; i++)
        matrix[i] = malloc(sizeof(int) * n);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) 
            matrix[i][j] = fillNumber;

    return matrix;
}

void print2DArray(int **a, int rows, int cols) {
    printf("Address: %p\n", a);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            printf("%02d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int rows = 5;
    int cols = 5;

    int **array = malloc(sizeof(int *) * rows);

    for (int i = 0; i < rows; i++)
        array[i] = malloc(sizeof(int) * cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) 
            array[i][j] = 1;

    print2DArray(array, rows, cols);

    for (int i = 0; i < rows; i++)
        free(array[i]);

    free(array);

    //////////////////////////////////////////////////////////////////

    int m = 5;
    int n = 5;

    int **matrix = createMatrix(m,n,2);

    print2DArray(matrix, m, n);

    for (int i = 0; i < m; i++)
        free(matrix[i]);

    free(matrix);

    //////////////////////////////////////////////////////////////////

    rows = 4;
    cols = 4;

    int **array1 = malloc(sizeof(int *) * rows);

    for (int i = 0; i < rows; i++)
        array1[i] = malloc(sizeof(int) * cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) 
            array1[i][j] = (i * 10) + j;

    print2DArray(array1, rows, cols);

    cols++;

    for (int i = 0; i < rows; i++)
        array1[i] = realloc(array1[i], sizeof(int) * cols);

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) 
            array1[i][j] = (i * 10) + j;

    print2DArray(array1, rows, cols);

    int newRows = 3;
    rows += newRows;

    array1 = realloc(array1, sizeof(int *) * rows);

    for (int i = rows - newRows; i < rows; i++)
        array1[i] = malloc(sizeof(int) * rows);

    for (int i = 0; i < rows; i++)
        free(array1[i]);

    free(array1);

    return 0;
}