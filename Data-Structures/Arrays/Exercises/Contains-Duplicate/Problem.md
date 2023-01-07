# Contains Duplicate

## Problem
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

### Example 1:
```
Input: nums = [1,2,3,1]
Output: true
```

### Example 2:
```
Input: nums = [1,2,3,4]
Output: false
```

### Example 3:
```
Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
```

### Constraints:

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## My logic

### Solution #1
- Brute force
- Simple solution, but not very efficient
- Compare each element with the others, if the elements are the same return false
```
containsDuplicate(nums, numsSize)
    for i = 0; i < numsSize; i++
        if i < numsSize - 1
            for j = i+1; j < numsSize; j++
                if nums[i] == nums[j]
                    return true
    
    return false
```

### Solution #2
- Sort the array
- Linearly traverse, find if there is any of the number and its greater one are equal or not
- Efficient
```
containsDuplicate(nums, numsSize)
    sort(nums)
    for i = 0; i < numsSize - 1; i++
        if(nums[i] == nums[i+1]) 
            return true
    return false
```