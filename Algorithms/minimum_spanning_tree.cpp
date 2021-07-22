/*
Minimum Spanning using Prim Algorithm

*/
int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<bool>visited(V,false);
        vector<int>weight(V,INT_MAX);
        weight[0] =0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        pq.push(make_pair(0,0));
        int ans =0;
        while(!pq.empty()){
            int u = pq.top().second;pq.pop();
            if(visited[u])continue;
            visited[u] = true;
            for(auto p : adj[u]){
                int v = p[0];
                int w = p[1];
                if(!visited[v] && weight[v] > w){
                    weight[v] = w;
                    pq.push({weight[v], v});
                }
            }
            
            ans += weight[u];
        }
        return ans;
        
    }
