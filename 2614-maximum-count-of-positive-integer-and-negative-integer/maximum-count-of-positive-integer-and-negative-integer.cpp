class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int posCount = 0, negCount = 0;
        int n = nums.size(); // Corrected 'lenth' to 'size()'

        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                negCount++; // Count negative numbers
            } else if (nums[i] > 0) {
                posCount++; // Count positive numbers
            }
        }
        
        return max(posCount, negCount); // Return the higher count
    }
};
