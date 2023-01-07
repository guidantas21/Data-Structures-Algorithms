import unittest

###### IMPLEMENTATION #######

class Solution:
    def shuffle(self, nums: list[int], n: int) -> list[int]:
        solution = []

        for i in range(n):
            solution.append(nums[i])
            solution.append(nums[n + i])

        return solution

###### TESTING #######

class TestShuffle(unittest.TestCase):
    def test_shuffle_1(self):
        self.assertEqual(Solution().shuffle([2,5,1,3,4,7], 3), [2,3,5,4,1,7])
    
    def test_shuffle_2(self):
        self.assertEqual(Solution().shuffle([1,2,3,4,4,3,2,1], 4), [1,4,2,3,3,2,4,1])

if __name__ == '__main__':
    unittest.main()