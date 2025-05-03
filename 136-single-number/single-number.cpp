class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_sum = 0;
        for (int num : nums) {
            xor_sum ^= num; // XOR the current number with the running sum
        }
        return xor_sum; // The final sum is the single number
    }
};