#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int *nums, int numsSize){
    for (int i = 0; i < numsSize; i++)
        if (i < numsSize - 1) 
            for (int j = i + 1; j < numsSize; j++) 
                if (nums[i] == nums[j])
                    return true;

    return false;
}

int main() {
    int nums[4] = { 1,2,3,4 };
    int numsSize = 4;
    printf("%s\n", containsDuplicate(nums, numsSize) ? "true" : "false");
    return 0;
}