class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
      int n = nums.size();
        int count = 0;

        for(int i = 0; i < n; i++) {
            long long currSum = 0;
            unordered_set<long long> seen;

            for(int j = i; j < n; j++) {
                currSum += nums[j];
                seen.insert(nums[j]);

                if(seen.count(currSum)) {
                    count++;
                }
            }
        }
        return count;
    }
};