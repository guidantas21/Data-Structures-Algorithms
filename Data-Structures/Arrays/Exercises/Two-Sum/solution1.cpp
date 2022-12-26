#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] + nums[j] == target) {
                    vector<int> solution = {i, j};
                    return solution;
                }
            }
        }
    }
};

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    vector<int> result = Solution().twoSum(nums, target);

    cout << result[0] << ", "<< result[1] << "\n";
}