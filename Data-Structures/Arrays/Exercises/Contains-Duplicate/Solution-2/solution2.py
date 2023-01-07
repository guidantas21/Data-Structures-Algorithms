import unittest

class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        nums.sort()
        for i in range(len(nums) - 1):
            if nums[i] == nums[i+1]:
                return True

        return False

class TestTwoSum(unittest.TestCase):
    def test_two_sum_1(self):
        self.assertEqual(Solution().containsDuplicate([1,2,3,1]), True)
    
    def test_two_sum_2(self):
        self.assertEqual(Solution().containsDuplicate([1,2,3,4]), False)
    
    def test_two_sum_3(self):
        self.assertEqual(Solution().containsDuplicate([1,1,1,3,3,4,3,2,4,2]), True)

if __name__ == '__main__':
    unittest.main()