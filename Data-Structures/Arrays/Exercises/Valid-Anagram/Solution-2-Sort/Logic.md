# Simple and efficient solution using sort

## Intuition
Conditions to be an anagram:
1. Same length
2. Each letter appears the same number of times (if sorted in alphabetical order, both words are equal)

Basic operations:
- Get length of a string
- Sort a string alphabetically
- Compare sorted strings

## Approach
So, basically we need to verify if the length of the strings are the same (condition 1). Then, we will sort both strings alphabetically, that way if the both sorted strings are equal (condition 2), it is an anagram. This solution can vary the performance depending on the sorting algorithm used, but in general is pretty efficient.

## Complexity
- Time complexity: O(nlogn)
- Space complexity: O(1)

## Code

```
isAnagram(s, t)
    if s.length() != t.length()
        return false
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for (int i=0; i < t.length(); i++)
        if (s[i] != t[i])
            return false;

    return true;
```