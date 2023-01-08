#include<stdio.h>

// Define constant values for the 2d array
#define ROWS 3
#define COLS 4

// Define constant values for the matrix
#define M 3
#define N 4
#define P 5

void printArray(int a[M][P]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; i < P; j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n\n");
}  


int main() {
    // Declare a 2D array (Type array[rows][columns])
    int a[2][3] = { 
        { 1,2,3 }, 
        { 4,5,6 } 
    };

    // Accessing elements (array[row][column])
    printf("a[0][2] = %d\n", a[0][2]);

    int A[M][N] = {
        { 1,2,3,4 },
        { 5,6,7,8 },
        { 9,10,11,12 }
    };
    
    int B[N][P] = {
        { 1,1,1,1,1 },
        { 1,1,1,1,1 },
        { 1,1,1,1,1 },
        { 1,1,1,1,1 }
    };

    return 0;
}