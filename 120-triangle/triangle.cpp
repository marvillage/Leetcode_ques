//Tabulation
class Solution {
public:
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        vector<vector<int>>dp;
        for(int i=0; i<n; i++){
            int tempS = triangle[i].size();
            vector<int>temp(tempS, INT_MAX);
            dp.push_back(temp);
        }
        dp[0][0] = triangle[0][0];
        for(int i=1; i<n; i++){
            int curr = dp[i].size();
            for(int j=0; j<curr; j++){
                if(j-1 >= 0) dp[i][j] = min(dp[i][j], dp[i-1][j-1]);
                if(j<curr-1)dp[i][j] = min(dp[i][j], dp[i-1][j]);

                dp[i][j] += triangle[i][j];
            }
        }
        int ans = INT_MAX;
        for(int i=0; i<dp[n-1].size(); i++){
            ans = min(ans, dp[n-1][i]);
        }
        return ans;
    }
};