#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int numsSize = nums.size();
        for (int i = 0; i < numsSize; i++)
            if (i < numsSize - 1) 
                for (int j = i + 1; j < numsSize; j++) 
                    if (nums[i] == nums[j])
                        return true;

        return false;
    }
};

int main() {
    vector<int> nums = { 1,2,3,4 };
    string solution = Solution().containsDuplicate(nums) ? "true" : "false";
    cout << solution << "\n";
    return 0;
}