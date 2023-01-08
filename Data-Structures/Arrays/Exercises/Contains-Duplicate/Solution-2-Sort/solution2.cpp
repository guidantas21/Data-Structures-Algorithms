#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int numsSize = nums.size();
         
        sort(nums.begin(), nums.end());
        for (int i = 0; i < numsSize-1; i++)
            if (nums[i] == nums[i+1])
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