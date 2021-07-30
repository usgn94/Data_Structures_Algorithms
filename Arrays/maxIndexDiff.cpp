/*
Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] <= A[j].
*/
class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        
        vector<int>right(n),left(n);
        left[0] = arr[0];
        
        for(int i=1;i<n;i++){
            left[i] = min(left[i-1], arr[i]);
        }
        
        right[n-1] =arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1], arr[i]);
        }
        
        int i=0,j=0,ans=-1;
        
        while(j<n && i<n){
            if(left[i] <= right[j]){
                ans = max(ans, j-i);
                j++;
            }
            else i++;
            
        }
        return ans;
    }
};
/*
IDEA:
TC: O(n)
SC: O(n)
Lets consider any example [7 3 1 8 9 10 4 5 6]
what is maxRight ?
Filling from right side 6 is first element now 6 > 5 so again we fill 6 till we reach 10 > 6 :
[10 10 10 10 10 10 6 6 6] this is maxR

[7 3 1 1 1 1 1 1 1 ] this is minL
now we see that how to reach answer from these to and its proof !!!
lets compare first elements of the arrays now we see 10 > 7,
now we increase maxR by 1 till it becomes lesser than 7 i.e at index 5
hence answer till now is. 5-0 = 5
now we will increase minL we get 3 which is lesser than 6 so we increase maxR till it reaches last index and the answer becomes 8-1= 7
*/
