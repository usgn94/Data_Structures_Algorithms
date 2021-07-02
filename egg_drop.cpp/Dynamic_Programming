
/*
Suppose you have N eggs and you want to determine from which floor in a K-floor building you can drop an egg such that it doesn't break. You have to determine the minimum number of attempts you need in order find the critical floor in the worst case while using the best strategy.There are few rules given below. 

An egg that survives a fall can be used again.
A broken egg must be discarded.
The effect of a fall is the same for all eggs.
If the egg doesn't break at a certain floor, it will not break at any floor below.
If the eggs breaks at a certain floor, it will break at any floor above.
*/
#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k) 
{
    int dp[k+1][n+1];

    for(int i = 1; i <= n; i++)
    {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }
    
    for(int i = 2; i <= k; i++)
    {
        dp[i][1] = i;
    }
    
    for(int i = 2; i <= k; i++)
    {
        for(int j = 2; j <= n; j++)
        {
            dp[i][j] = INT_MAX;
            
            for(int x = 1; x <= i; x++)
            {
                //Dropping the egg from xth floor
                //case1 -> egg drops -> the floor must be in the below (x-1) ->dp[x-1][j-1]
                //case2 -> egg doesnt break -> the floor must be from the rest above (i-x) -> dp[i-x][j]
                dp[i][j] = min(dp[i][j], 1+max(dp[x-1][j-1], dp[i-x][j]));
            }
        }
    }
    
    return dp[k][n];
}
int main(){
    int n,k;
    cin>>n>>k;
    eggDrop(n,k);
}
