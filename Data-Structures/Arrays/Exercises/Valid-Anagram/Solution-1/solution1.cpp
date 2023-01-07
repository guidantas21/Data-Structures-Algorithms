#include <iostream>
#include <set>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        set<char> checked;

        for (auto c : s) 
            if (checked.find(c) == checked.end()) {
                if (count(s.begin(), s.end(), c) != count(t.begin(), t.end(), c))
                    return false;

                checked.insert(c);
            }
        return true;
    }
};

int main() {
    cout << Solution().isAnagram("anagram", "nagaram") << "\n";
    cout << Solution().isAnagram("rat", "car") << "\n";

    return 0;
}