class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        const int n = nums.size();
        if (n < 3) return 0;
        long long maxi = nums[0], maxi_j = 0, ans = 0;
        for (int j = 1; j < n-1; j++) {
            maxi_j = max(maxi_j, maxi - nums[j]);
            maxi = max(maxi, 1LL * nums[j]);
            ans = max(ans, maxi_j * nums[j + 1]);
        }
        return ans;
    }
};