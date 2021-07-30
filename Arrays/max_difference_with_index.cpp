/*
Given an array arr[] of N positive integers. Find maximum value of |arr[i] – arr[j]| + |i – j|, (0 <= i, j <= N – 1)
*/

class Solution {
  public:
    int maxValue(int arr[], int N) {
        int min1=INT_MAX,max1=INT_MIN,min2=INT_MAX,max2=INT_MIN;
        
        for(int i=0;i<N;i++){
            min1 = min(min1 , arr[i]+i);
            max1 = max(max1, arr[i] + i);
            
            min2 = min(min2, arr[i]-i);
            max2 = max(max2, arr[i]-i);
        }
        int ans = max(abs(max2-min2), abs(max1-min1));
        return ans;
    }
};

/*
IDEA:
if we solve the given equation we get 2 equations
1. abs((ai + i) - (aj + j))
2. abs((ai - i) - (aj - j))

*/
