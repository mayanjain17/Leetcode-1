class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int c=0,n=g.size(),m=g[0].size();
        int dp[n][m];
        dp[0][0]=g[0][0];
        for(int i=1;i<n;i++)dp[i][0]=dp[i-1][0]+g[i][0];
        for(int i=1;i<m;i++)dp[0][i]=dp[0][i-1]+g[0][i];
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j]=g[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
    }
};   