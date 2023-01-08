import unittest

###### IMPLEMENTATION #######

class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        nums.sort()
        for i in range(len(nums) - 1):
            if nums[i] == nums[i+1]:
                return True

        return False

###### TESTING #######

class TestContainsDuplicate(unittest.TestCase):
    def test_1(self):
        self.assertEqual(Solution().containsDuplicate([1,2,3,1]), True)
    
    def test_2(self):
        self.assertEqual(Solution().containsDuplicate([1,2,3,4]), False)
    
    def test_3(self):
        self.assertEqual(Solution().containsDuplicate([1,1,1,3,3,4,3,2,4,2]), True)

if __name__ == '__main__':
    unittest.main()