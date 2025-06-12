#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        int m = abs(nums[0] - nums[n - 1]);
        for (int i = 0; i < n - 1; i++) {
            int s = abs(nums[i] - nums[i + 1]);
            m = max(m, s);
        }
        return m;
    }
};
