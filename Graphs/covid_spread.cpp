/*
Aterp is the head nurse at a city hospital. City hospital contains R*C number of wards and the structure of a hospital is in the form of a 2-D matrix.
Given a matrix of dimension R*C where each cell in the matrix can have values 0, 1, or 2 which has the following meaning:
0: Empty ward
1: Cells have uninfected patients
2: Cells have infected patients

An infected patient at ward [i,j] can infect other uninfected patient at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
Help Aterp determine the minimum units of time after which there won't remain any uninfected patient i.e all patients would be infected.
If all patients are not infected after infinite units of time then simply return -1.
 
*/

class Solution {
public:
   
    int helpaterp(vector<vector<int>> hos)
    {
        int r = hos.size();
        int c = hos[0].size();
        
        vector<vector<bool>>visited(r,vector<bool>(c,false));
        int ans = -1;
        
        queue<pair<int,int>>q;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hos[i][j] == 2){
                   q.push(make_pair(i,j));
                }

            }
        }
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                pair<int,int>u = q.front();
                q.pop();
                int i = u.first, j = u.second;
                
                if(i-1>=0 && hos[i-1][j] == 1){
                    hos[i-1][j] = 2;
                    q.push(make_pair(i-1,j));
                }
                
                if(i+1<r && hos[i+1][j] ==1 ){
                    hos[i+1][j] = 2;
                    q.push(make_pair(i+1,j));
                    
                }
                if(j-1>=0 && hos[i][j-1] ==1){
                    hos[i][j-1] = 2;
                    q.push(make_pair(i,j-1));
                }
                if(j+1<c && hos[i][j+1] ==1){
                    hos[i][j+1] = 2;
                    q.push(make_pair(i,j+1));
                }
            }
            ans++;
        }
        
        
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hos[i][j] == 1){
                   return -1;
                }

            }
        }
        
        return ans;
        
    }
};

/*
First we are inserting all 2's(infected) into the queue
Then 1's that adjacent to them
and so on
Thereby we get the least time required for coverting each 1 into 2
TC: O(R*C)

*/
