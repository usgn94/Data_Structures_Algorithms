class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    // Code here
	    queue<int>q;
	    q.push(0);
	    vector<int> ans;
	    vector<bool>visited(V,false);
	    visited[0] = true;
	    
	    while(!q.empty()){
	        int u = q.front();
	        q.pop();
	        ans.push_back(u);
	        for(auto v : adj[u]){
	            if(!visited[v]){
	                q.push(v);
	                visited[v] = true;
	            }
	        }
	    }
	    return ans;
	}
};

/*
while loop runs in total E times
for loop inside while runs a total of Vtimes
TC: O(E+V)
*/
