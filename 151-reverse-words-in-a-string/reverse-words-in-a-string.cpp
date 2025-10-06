class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int j = n - 1;
        int i = 0;
        string ans = "";

        while (i < n) {
            // Skip any leading spaces
            while (i < n && s[i] == ' ')
                i++;

            if (i >= n) break; // End of string reached

            // Find the end of the current word
            j = i + 1;
            while (j < n && s[j] != ' ')
                j++;

            // Extract the word
            string sub = s.substr(i, j - i);

            // Prepend the word to the result string
            if (ans.length() == 0)
                ans = sub;
            else
                ans = sub + " " + ans;

            // Move to the next word
            i = j + 1;
        }

        return ans;
    }
};