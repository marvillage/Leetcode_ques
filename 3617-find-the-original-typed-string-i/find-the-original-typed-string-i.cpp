class Solution {
public:
    int possibleStringCount(string word) {
        int ans = 1;

        // intial group
        int cnt = 1;
        char ch = word[0];

        for(int i=1;i<word.size();i++){
            if(word[i]==ch){
                // current group increases
                cnt++;
            }
            else{
                // add valid sstrings to answer
                ans+=(cnt - 1);

                // new group started;
                ch = word[i];
                cnt=1;
            }    
        }

        // last group
        ans += (cnt-1);

        return ans;
    }
};