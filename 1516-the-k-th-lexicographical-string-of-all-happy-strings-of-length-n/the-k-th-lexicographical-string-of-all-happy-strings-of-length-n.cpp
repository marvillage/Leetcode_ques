class Solution {
public:
    string getHappyString(int n, int k) {
        vector<string> result;
        string current;
        generateHappyStrings(n, "", result);
        
        if (k > result.size()) return "";
        return result[k - 1];  // 1-based index
    }
    
private:
    void generateHappyStrings(int n, string current, vector<string>& result) {
        if (current.size() == n) {
            result.push_back(current);
            return;
        }
        
        for (char ch : {'a', 'b', 'c'}) {
            if (current.empty() || current.back() != ch) {
                generateHappyStrings(n, current + ch, result);
            }
        }
    }
};
