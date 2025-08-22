class Solution {
public:
    int firstBadVersion(int n) {
        for (long long i = 0; i < n; i++) {
            if (isBadVersion(i)) {
                return i;

            }
        }
        return n;
    }
};