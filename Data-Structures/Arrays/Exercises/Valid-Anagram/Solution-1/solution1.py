import unittest

###### IMPLEMENTATION #######

class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        checked = set()

        for c in s:
            if c not in checked:
                if s.count(c) != t.count(c):
                    return False
                    
                checked.add(c)
        
        return True

###### TESTING #######

class TestIsAnagram(unittest.TestCase):
    def test_1(self):
        self.assertEqual(Solution().isAnagram("anagram", "nagaram"), True)
    
    def test_2(self):
        self.assertEqual(Solution().isAnagram("rat", "car"), False)


if __name__ == '__main__':
    unittest.main()