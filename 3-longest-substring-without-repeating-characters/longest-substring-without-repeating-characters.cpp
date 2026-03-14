class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            vector<char> v;

            for(int j = i; j < s.size(); j++) {

                bool found = false;

                for(char c : v) {
                    if(c == s[j]) {
                        found = true;
                        break;
                    }
                }

                if(found) break;

                v.push_back(s[j]);
                ans = max(ans, (int)v.size());
            }
        }

        return ans;
    }
};