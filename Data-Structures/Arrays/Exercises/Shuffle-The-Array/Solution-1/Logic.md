# Simple Solution

## Intuition
Basically add i element and the n + i element of the array to the solution array

## Approach
Create a solution array with size 2n, loop from 0 to n and add the i element and the n + 1 element of the nums array to the solution array

## Complexity
- Time complexity: O(n)
- Space complexity: O(n)

## Code

```
shuffleNumbers(nums, n)
    create solution array with size 2n

    for i = 0; i < n; i++
        solution.push_back(nums[i])
        solution.push_back(nums[n+i])
    
    return solution
```