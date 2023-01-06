#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> solution;

        for (int i = 0; i < n; i++) {
            solution.push_back(nums[i]);
            solution.push_back(nums[n + i]);
        }

        return solution;
    }
};


int main() {
        vector<int> nums = {2,5,1,3,4,7};
        int n = 3;

        vector<int> solution = Solution().shuffle(nums, n);
        for (int i = 0; i < 2*n; i++)
            printf("%d ", solution[i]);
        printf("\n");

    return 0;
}