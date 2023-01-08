#include <iostream>
#include <set>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
            
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for (int i=0; i < t.length(); i++)
            if (s[i] != t[i])
                return false;

        return true;
    }
};

int main() {
    cout << Solution().isAnagram("anagram", "nagaram") << "\n";
    cout << Solution().isAnagram("rat", "car") << "\n";
    return 0;
}