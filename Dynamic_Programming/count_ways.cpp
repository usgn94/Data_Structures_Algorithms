/*
A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.
*/

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long mod = 1000000007;
    
    long long countWays(int n)
    {
       int m = 3;
       vector<long long>dp(n+1,0);
        dp[0] =1;
        for(long long j=1;j<=n;j++){
            for(long long i=1;i<=m;i++){
                if((j-i) >=0 ){
                    dp[j] = (dp[j-i] + dp[j])%mod;
                }
            }
        }
        return dp[n];
            
        }
};
