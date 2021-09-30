class Solution {
public:
    string longestPalindrome(string s) {
       int n=s.size();
        string ans;
        vector<vector<int>> dp(n+1,vector<int>(n+1));
        int leni=1,lenj=1;
        for(int i=0;i<n;i++){
            dp[0][i]=1;
            dp[1][i]=1;
        }
        
        for(int i=2;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(s[j-i]==s[j-1] && dp[i-2][j-1]){
                    dp[i][j]=1;leni=i;lenj=j;
                }else{
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=lenj-leni;i<lenj;i++){
            ans+=s[i];
        }
        
        return ans;
        
    }
        
        
    
};