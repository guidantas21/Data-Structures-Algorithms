/*
==+ ONE DIMENSIONAL ARRAYS IN C +==

Colection of data that has the same type\

Arrays make the code more optimized and clean since we can store multiple elements in a single array at once, so we do not have to write or initialize them multiple times.
Every element can be traversed in an array using a single loop.
Arrays make sorting much easier. Elements can be sorted by writing a few lines of code.
Any array element can be accessed in any order either from the front or rear in O(1) time.
Insertion or deletion of the elements can be done in linear complexity in an array.

*/

#include<stdio.h>

// Calculate the length of the array in compile (Only works for 1D arrays)
#define LENGTH(a) sizeof(a) / sizeof(a[0]) 

/////// PRINT ARRAY INFO ////////

// Passing an array by reference (pointer)
void printArray(int *array, size_t length) {
    // array[] decays to a pointer
    printf("Address: %p\n", array);
    printf("Length: %zu\n", length);

    for (int i = 0; i < length; i++) {
        printf("%d\t", array[i]);

        if (i != length-1) printf(", ");
    }
    printf("\n\n");
}

/////// FILL ARRAY ////////

void setArray(int value, int *array, int length) {
    for (int i = 0; i < length; i++) array[i] = value;
}

int main() {
    // Create a empty array with 5 slots to store integers (type name[size])
    // Value:
    // Index:  0  1  2  3  4
    int array[5]; 

    // Add 5 to the slot located on the index 0
    array[0] = 5;
    array[1] = 2;
    array[2] = 7;
    array[3] = 1;
    array[4] = 3;

    // Value:  5  2  7  1  3
    // Index:  0  1  2  3  4

    printArray(array, 5);

    /////////////////////////////////////////////////////////////////

    // You can also declare the array and fill the slots with values
    int array2[] = { 9, 5, 2, 6 };

    size_t n2 = LENGTH(array2);
    

    printArray(array2, n2);

    /////////////////////////////////////////////////////////////////

    const size_t n3 = 3;
    int array3[3];

    setArray(4, array3, n3);

    printArray(array3, n3);

    return 0;
}