/*
Given an array Arr of N numbers and another number target, find three integers in the array such that the sum is closest to target.
Return the sum of the three integers.
NOTE: If their exists more than one answer then return the maximum sum.
*/

int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
      sort(arr.begin(), arr.end());
      int n = arr.size();
      int mini =INT_MAX,ans =0;

      for(int i=0;i<n;i++){
          int j=i+1;
          int k = n-1;
          while(j < k){
              int sum = arr[i]+arr[j]+arr[k];
              //cout<<target<<" "<<sum<<"\n";
              if(abs(target-sum) < mini){
                  mini = abs(target-sum);
                  ans = sum;
              }
              else if(abs(target-sum) == mini && sum > ans ){
                  ans = sum;
              }

              if(sum < target)j++;
              else k--;
          }
      }
      return ans;

  }
/*
IDEA:
TC: O(n^2)
SC: O(1)

*/
