
/*
You are given an array A of size N. The array contains integers and is of even length. The elements of the array represent N coin of values V1, V2, ....Vn. You play against an opponent in an alternating way.

In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin.

You need to determine the maximum possible amount of money you can win if you go first.
Note: Both the players are playing optimally.

*/
long long maximumAmount(int arr[], int n) 
{
    long long dp[n][n];
    
    // i i+1 .........j 
    //case1 -> (I choose i) my_pos1 = arr[i] + min(dp[i+2][j] , dp[i+1][j-1])
    //case2 -> (I choose j) my_pos2 = arr[j] + min(dp[i+1][j-1] , dp[i][j-2])
    // as both play optimally we take min in each pos
    //dp[i][j] = max(my_pos1 , my_pos2)
    // observe -> gap b/w i,j => j-i
    //         -> gap b/w rest => j-i-2 (less gap)
    // so we have to perform gap wise
    
    for(int k=0;k<n;k++){
        for(int i=0,j=k; j<n; j++,i++){
            if(i == j){
                dp[i][j] =arr[i];
            }
            else if(j == (i+1)){
                dp[i][j] = max(arr[i], arr[j]);
            }
            else{
                
                dp[i][j] = max((arr[i] + min(dp[i+2][j] , dp[i+1][j-1])), (arr[j] + min(dp[i+1][j-1] , dp[i][j-2])));
            }
            
        }
    }
    return dp[0][n-1];
}
