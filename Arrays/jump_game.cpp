/*
Given an positive integer N and a list of N integers A[]. 
Each element in the array denotes the maximum length of jump you can cover.
Find out if you can make it to the last index if you start at the first index of the list.
*/
class Solution {
  public:
    int canReach(int A[], int n) {
        int max_reach = 0;
        
        for(int i=0;i<n;i++){
            if(max_reach>=i){
                max_reach = max(max_reach, i+A[i]);
            }
            else return 0;
        }
        return 1;
    }
};
