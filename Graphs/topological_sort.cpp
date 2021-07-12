class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<int>in_degree(v,0);
	    vector<bool>visited(v,false);
	    for(int u=0;u<v;u++){
	        for(auto v1 : adj[u]){
	            in_degree[v1]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<v;i++){
	        if(in_degree[i] == 0){
	            q.push(i);
	            visited[i] = true;
	        }
	    }
	    vector<int>ans;
	    while(!q.empty()){
	        int temp = q.front();
	        q.pop();
	        ans.push_back(temp);
	        
	        for(auto v1 : adj[temp]){
	            if(!visited[v1]){
	                in_degree[v1]--;
	                if(in_degree[v1] == 0){
	                    visited[v1] = true;
	                    q.push(v1);
	                }
	            }
	        }
	    }
	    return ans;
	    
	}
};

/*
Topological sort is for Directed Acyclic Graph (DAG)
while loop -> V
for loop in while -> E
TC: O(V+E)
*/
