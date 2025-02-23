#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int, int> hashMap;

        // Initialize hashmap with numbers from 0 to n
        int n = nums.size();
        for (int i = 0; i <= n; i++) {
            hashMap[i] = 0;
        }

        // Mark numbers present in nums
        for (int num : nums) {
            hashMap[num] = 1;
        }

        // Find the missing number
        for (int i = 0; i <= n; i++) {
            if (hashMap[i] == 0) {
                return i;
            }
        }

        return -1; // Should never reach here
    }
};
