class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        vector<int> freq(value, 0);
        for (int num : nums) {
            int mod = ((num % value) + value) % value;
            freq[mod]++;
        }

        for (int i = 0; ; i++) {
            int mod = i % value;
            if (freq[mod] == 0)
                return i;
            freq[mod]--;
        }
    }
};
