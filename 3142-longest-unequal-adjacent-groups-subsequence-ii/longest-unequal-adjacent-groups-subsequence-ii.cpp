class Solution {
public:
    int hammingDistance(const string& s1, const string& s2) {
        if (s1.length() != s2.length()) return 0;

        int distance = 0;
        for (size_t i = 0; i < s1.length(); ++i) {
            if (s1[i] != s2[i]) distance++;
        }
        return distance;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1);              
        vector<int> parent(n, -1);         

        int max_len = 1, last_index = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] &&
                    words[i].length() == words[j].length() &&
                    hammingDistance(words[i], words[j]) == 1 &&
                    dp[j] + 1 > dp[i]) {
                    
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }

            if (dp[i] > max_len) {
                max_len = dp[i];
                last_index = i;
            }
        }

        // Reconstruct the subsequence
        vector<string> result;
        while (last_index != -1) {
            result.push_back(words[last_index]);
            last_index = parent[last_index];
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
