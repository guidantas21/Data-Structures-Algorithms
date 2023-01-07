#include<stdio.h>
#include<stdlib.h>

/*
 * Note: The returned array must be malloced, assume caller calls free().
*/
int* twoSum(int* nums, int numsSize, int target){
    for (int i=0; i < numsSize; i++) {
        for (int j=i+1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int *answer = malloc(sizeof(int) * 2);
                answer[0] = i;
                answer[1] = j;
                return answer;
            }
        }
    }
}

int main() {
    int nums[4] = {2,7,11,15};
    int numsSize = 4;
    int target = 9;
    int returnSize = sizeof(int) * 2;

    int* answer = twoSum(nums, numsSize, target);
    printf("%d and %d", answer[0], answer[1]);
    free(answer);

    return 0;
}