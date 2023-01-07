# Simple solution and efficient using Set

# Intuition
Conditions to be an anagram:
1. Same length
2. Each letter appears the same number of times

Basic operations:
- Get length of a string
- Count the number of times a letter appears in a string

# Approach
So, basically we need to verify if the length of the strings are the same (condition 1). Then, we need to loop over each letter of the string and check if the number of times that each letter apperas is the same (condition 2). However, to avoid analyzing repeated letters that were already analyzed, we store each letter in a Set, this way we only count the number of apparitions and make the comparison if the letter is not in the Set. This approach sacrifies some memory in order to create the Set, so it can have an efficient performance.

# Complexity
- Time complexity: O(n²)
- Space complexity: O(n)

# Code
```
isAnagram(s,t)
    if s.length() != t.length()
        return false

    ckecked = set()

    for c in s
        if c not in checked
            if s.count(c) != t.count(c)
                return false
                
            checked.insert(c)
        
    return true
```