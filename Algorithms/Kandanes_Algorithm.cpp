
/*
Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
*/
//Method-1 Simple Logic
//Time Complexity - O(n)
//Space Complexity - O(1)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        int sum=0;
        int res =a[0];
        
        for(int i=0;i<n;i++){
            sum+=a[i];
            res = max(res, sum);
            if(sum < 0)sum=0;
           
        }
        return res;
    }
};

//Mehod-2 Kadane's Algoithm
//Time Complexity - O(n)
//Space Complexity - O(n)
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        
        int dp[n];
        dp[0] = a[0];
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1]+a[i] , a[i]);
        }
        int res =INT_MIN;
        for(int i=0;i<n;i++){
            res = max(res, dp[i]);
        }
        return res;
    }
};
