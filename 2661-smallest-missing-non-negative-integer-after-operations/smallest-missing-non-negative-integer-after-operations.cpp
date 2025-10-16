class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        // Step 1: Replace each element with its positive modulo
        for (int &num : nums)
            num = ((num % value) + value) % value; // handle negatives correctly

        // Step 2: Count frequency of each remainder
        vector<int> freq(value, 0);
        for (int num : nums)
            freq[num]++;

        // Step 3: Find MEX
        for (int i = 0; ; i++) {
            int mod = i % value;
            if (freq[mod] == 0)
                return i;
            freq[mod]--;
        }
    }
};
