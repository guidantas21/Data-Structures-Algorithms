#include <stdio.h>
#include <stdlib.h>

int* shuffle(int* nums, int numsSize, int n){
    int *solution = malloc(sizeof(int)*numsSize);

    for (int i = 0; i < numsSize; i += 2) {
        solution[i] = nums[i/2];
        solution[i+1] = nums[i/2 + n];
    }

    return solution;
}

int main() {
    int nums[6] = {2,5,1,3,4,7};
    int numsSize = 6;
    int n = 3;

    int *solution = shuffle(nums, numsSize, n);
    for (int i = 0; i < numsSize; i++)
        printf("%d ", solution[i]);
    printf("\n");

    free(solution);
    return 0;
}