class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs) {
        int n=obs.size(),m=obs[0].size();
        vector<vector<int>> dp(n+1,vector<int>(m+1));
        
        dp[0][1]=1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(!obs[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        
        return dp[n][m];
    }
};