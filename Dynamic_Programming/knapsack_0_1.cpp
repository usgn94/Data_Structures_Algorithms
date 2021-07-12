/*
You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
Note that we have only one quantity of each item.In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values
and weights associated with N items respectively.Also given an integer W which represents knapsack capacity, find out the
maximum value subset of val[] such that sum of the weights of this subset is 
smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).
*/

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n+1, vector<int>(w+1,0));
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                dp[i][j] = dp[i-1][j];
                if((j-wt[i-1]) >=0 ){
                    dp[i][j] = max(dp[i][j], val[i-1]+dp[i-1][j-wt[i-1]]);
                }
            }
        }
        return dp[n][w];
        }
};

/*
confused what makes if different from using multiple items?
see if it is not 0-1 -> dp[i][j] = max(dp[i][j], val[i-1]+dp[i][j-wt[i-1]]);
but for 0-1 ->          dp[i][j] = max(dp[i][j], val[i-1]+dp[i-1][j-wt[i-1]]);

Notice the difference we are taking (i-1) hence not including the same elemen twice
*
