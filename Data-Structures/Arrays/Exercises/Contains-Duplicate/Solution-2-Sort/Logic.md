# Simple and efficient solution using sort

## Intuition
- When we sort an array, the duplicates stay together, for example:
    ```
    array -> 1,7,4,2,9,1,4
    sorted array -> 1,1,2,4,4,7,9
    ```
- That way is easier to detect the duplicates

## Approach
Basically we will sort the array, then loop over it and verify if the i element equals de i + 1 element (next element), if it does, it's a dulpicate, so return true. The performance of this solution depends on the sorting algorithm used, but in general it is pretty efficient.

## Complexity
- Time complexity: O(nlogn)
- Space complexity: O(1)

## Code

```
containsDuplicate(nums, numsSize)
    sort(nums)
    for i = 0; i < numsSize - 1; i++
        if(nums[i] == nums[i+1]) 
            return true
    return false
```