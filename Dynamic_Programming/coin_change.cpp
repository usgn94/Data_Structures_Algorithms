class Solution
{
  public:
    long long int count( int S[], int m, int n )
    {
       
        vector<vector<long long int>>dp(m+1, vector<long long int>(n+1,0));
        for(long long int i=0;i<m;i++){
            dp[i][0] =1; /// amount = 0 -> 1 way
        }
    
        for(long long int i=1;i<=m;i++){
            for(long long int j=1;j<=n;j++){
                dp[i][j] = dp[i-1][j]; // not including current element
                if((j-S[i-1]) >=0 ){
                    dp[i][j] += dp[i][j-S[i-1]]; // including current element
                }
            }
        }
        
       
        return dp[m][n];
        
    }
};
