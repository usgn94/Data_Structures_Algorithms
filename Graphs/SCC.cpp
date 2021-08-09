class Solution
{
	public:
    vector<vector<int>> get_transpose(vector<int>adj[], int n){
        vector<vector<int>>adj_T(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                adj_T[adj[i][j]].push_back(i);
            }
        }
        return adj_T;
    }
    
    void dfs1(vector<int>adj[], vector<int>&visited, int u ,stack<int>&st){
        visited[u] = true;
        
        for(auto v : adj[u]){
            if(!visited[v]){
                dfs1(adj,visited,v,st);
            }
        }
        
        st.push(u);
        
    }
    
    void dfs2(vector<vector<int>>&adj, vector<int>&visited, int u,vector<int>&res ){
        visited[u] = true;
        res.push_back(u);
        ///cout<<u<<" a\n";
        for(auto v : adj[u]){
            if(!visited[v]){
                dfs2(adj,visited,v,res);
            }
        }
    }
    
    
    vector<vector<int>> SCC(int n, vector<int> adj[])
    {
        
        vector<vector<int>>ans;
        vector<int>visited(n,false);
        stack<int>st;
        
        for(int i=0;i<n;i++){
            
            if(!visited[i])dfs1(adj,visited,i,st);
        }
        
        
        vector<vector<int>>adj_t = get_transpose(adj,n);
        vector<int>visited1(n,false);
        
        while(!st.empty()){
            int u = st.top();
            st.pop();
            
            vector<int>res;
            if(!visited1[u])dfs2(adj_t,visited1,u,res);
            if(res.size() > 0)ans.push_back(res);
            
        }
       
        return ans;
        
    }
};
