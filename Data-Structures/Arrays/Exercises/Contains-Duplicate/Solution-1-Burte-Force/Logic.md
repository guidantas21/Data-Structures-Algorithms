# Brute Force Solution

## Intuition
Loop over each element and compare it with the others.

## Approach
For each element of the array, we are to verify if any of the other elements has the same value (duplicate), if it does, return false.

## Complexity
- Time complexity: O(n²)
- Space complexity: O(1)

## Code

```
containsDuplicate(nums, numsSize)
    for i = 0; i < numsSize; i++
        if i < numsSize - 1
            for j = i+1; j < numsSize; j++
                if nums[i] == nums[j]
                    return true
    return false
```