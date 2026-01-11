class Solution {
public:
    string shiftOnce(string s) {
        for (char &c : s) {
            if (c == 'z') c = 'a';
            else c++;
        }
        return s;
    }

    long long countPairs(vector<string>& words) {
        unordered_map<string,long long> freq;
        for (auto &w : words) freq[w]++;

        long long ans = 0;

        for (auto &it : freq) {
            long long c = it.second;
            ans += (c * (c - 1)) / 2;
        }

        unordered_set<string> used;

        for (auto &it : freq) {
            string start = it.first;
            if (used.count(start)) continue;

            vector<string> cycle;
            string cur = start;

            do {
                cycle.push_back(cur);
                used.insert(cur);
                cur = shiftOnce(cur);
            } while (cur != start);

            long long sum = 0, sq = 0;
            for (auto &w : cycle) {
                if (freq.count(w)) {
                    sum += freq[w];
                    sq += 1LL * freq[w] * freq[w];
                }
            }

            ans += (sum * sum - sq) / 2;
        }

        return ans;
    }
};
