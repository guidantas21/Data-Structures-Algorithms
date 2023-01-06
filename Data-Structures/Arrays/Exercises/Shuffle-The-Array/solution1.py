###### IMPLEMENTATION #######

class Solution:
    def shuffle(self, nums: list[int], n: int) -> list[int]:
        solution = []

        for i in range(n):
            solution.append(nums[i])
            solution.append(nums[n + i])

        return solution

###### TESTING #######

# INPUT
nums = [2,5,1,3,4,7]
n = 3

# OUTPUT
print(Solution().shuffle(nums, n))