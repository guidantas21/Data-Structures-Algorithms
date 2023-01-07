# Two Sum

## Problem
- Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

- You may assume that each input would have exactly one solution, and you may not use the same element twice.

- You can return the answer in any order.

### Example 1:
```
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

### Example 2:
```
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

### Example 3:
```
Input: nums = [3,3], target = 6
Output: [0,1]
```

### Constraints:

- 2 <= nums.length <= 104
- -109 <= nums[ i ] <= 109
- -109 <= target <= 109
- Only one valid answer exists.


## My logic

### Solution #1

- This solution is kinda like a brutal force, but it solves the problem...
- Basically consists in looping over each number and sum this number with each one of the remaining numbers on the array, if the sum between them equals the target number, store their indexes on an array an return it.
- Time complexity: O(n²)
- Space complexity: O(1)

```
twoSum(nums, target)
    for i=0 in nums.size()
        for j=i+1 in nums.size()
            if nums[i]+nums[j] == target
                return [i, j]
```
