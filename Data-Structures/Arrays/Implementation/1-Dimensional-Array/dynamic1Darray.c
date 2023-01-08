#include<stdio.h>
#include<stdlib.h>
#include <time.h>

/*
DYNAMIC ARRAY
*/
// Helper fuction to get a random number from 
int getRandomNumber(int max) {
    return rand() % max;
}

///////////// "RETURN" A DYNAMIC ARRAY /////////////

// Given a dynamic array, fill it with random numbers
void randomArray(int *a, size_t length) {
    // In this case, the memory for the array was already allocated, we just need to fill it

    for (int i = 0; i < length; i++) 
        a[i] = getRandomNumber(100);
}

///////////// RETURN A DYNAMIC ARRAY /////////////

// Allocate memory for an array, fill it random numbers, and return its pointer
int *getRandomArray(size_t length) {
    // In this case, we will allocate memory for the array, fill it, and return its pointer
    int *a = malloc(sizeof(int) * length);

    randomArray(a, length);

    return a;
}

///////////// "RETURN" MULTIPLE DYNAMIC ARRAYS /////////////

// Given 2 pointers of pointers, allocate memory for 2 arrays and fill it with random numbers
void twoRandomArrays(int **a1, int **a2, size_t length) {
    // In this case, we have pointer that points to other pointer 
    *a1 = getRandomArray(length);
    *a2 = getRandomArray(length);
}

///////////// PRINT A DYNAMIC ARRAY /////////////

void printArray(int *a, size_t length) {
    printf("Address: %p\n", a);
    printf("Length: %zu\n", length);

    for (int i = 0; i < length; i++) {
        printf("%d", a[i]);

        if (i != length - 1) printf(", ");
    }
    printf("\n\n");
}

int main() {
    srand(time(NULL));

    int length = 5;

    // Allocate memory to store 5 integers on the heap and return a the its address
    int *a = malloc(length * sizeof(int));
    randomArray(a, length);

    printArray(a, length);

    // Deallocate the memory
    free(a);

    /////////////////////////////////////////////////////////////////////////////////////

    length = getRandomNumber(20);

    int *b = getRandomArray(length);

    printArray(b, length);

    free(b);


    int *c = getRandomArray(length);

    printArray(c, length);
    
    free(c);

    /////////////////////////////////////////////////////////////////////////////////////

    length = getRandomNumber(20);

    int *array1, *array2;

    twoRandomArrays(&array1, &array2, length);


    printArray(array1, length);
    
    free(array1);


    printArray(array2, length);
    
    free(array2);

    //////////////////////////////////////////////////////////////////////////////////////

    length = 5;

    int *array3 = malloc(sizeof(int) * length);

    randomArray(array3, length);

    printArray(array3, length);


    int newLength = 10;

    array3 = realloc(array3, sizeof(int) * newLength);

    randomArray(array3, newLength);

    printArray(array3, newLength);

    free(array3);

    return 0;
}