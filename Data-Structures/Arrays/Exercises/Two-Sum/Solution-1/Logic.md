# Brutal force solution

## Intuition
Basically the ideia is to loop over each element and compare it with the other the elements remaining

## Approach
So, we are going to loop over each element of the nums array each element of the nums array, for each element we loop over the remaining elements, verifying if their sum equals the target, if it does, return an array that contains those two numbers.

## Complexity
- Time complexity: O(n²)
- Space complexity: O(1)

## Code

```
twoSum(nums, target)
    for i=0 in nums.size()
        for j=i+1 in nums.size()
            if nums[i]+nums[j] == target
                return [i, j]
```