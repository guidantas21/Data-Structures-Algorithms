import unittest

###### IMPLEMENTATION #######

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        return ''.join(sorted(s)) == ''.join(sorted(t))

###### TESTING #######

class TestIsAnagram(unittest.TestCase):
    def test_1(self):
        self.assertEqual(Solution().isAnagram("anagram", "nagaram"), True)
    
    def test_2(self):
        self.assertEqual(Solution().isAnagram("rat", "car"), False)


if __name__ == '__main__':
    unittest.main()