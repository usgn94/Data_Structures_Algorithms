
/*
All edges must have nonnegative weights
Approach: Greedy
*/

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    int min_vertex(vector<int>dist, vector<bool>visited ){
        int min_index = -1;
        int min_dist = INT_MAX;
        
        for(int i=0;i<dist.size();i++){
            if(dist[i] < min_dist && !visited[i]){
                min_index = i;
                min_dist = dist[i];
            }
        }
        return min_index;
    }
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s)
    {
        vector<vector<int>> graph(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                graph[i][adj[i][j][0]] = adj[i][j][1];
                graph[adj[i][j][0]][i] = adj[i][j][1];
            }
        }
        
       
        
        vector<int>dist(n,INT_MAX),pre(n,-1);
        dist[s] =0;
        vector<bool>visited(n,false);
        
        for(int i=0;i<n;i++){
            int u = min_vertex(dist,visited);
            if(u == -1)break;
            visited[u] = true;
            for(int v =0;v<n;v++){
                if(graph[u][v]!=0 && !visited[v]  && (dist[v]> (dist[u] + graph[u][v]))){
                    dist[v] = dist[u] + graph[u][v];
                    pre[v] = u;
                }
            }
        }
        return dist;
        
    }
};


//using priority queue
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s)
    {
        vector<vector<int>> graph(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                graph[i][adj[i][j][0]] = adj[i][j][1];
                graph[adj[i][j][0]][i] = adj[i][j][1];
            }
        }
        
       
        
        vector<int>dist(n,INT_MAX),pre(n,-1);
        dist[s] =0;
        vector<bool>visited(n,false);
        
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> >pq;
        pq.push(make_pair(dist[s], s));
        
        while(!pq.empty()){
            int u = pq.top().second;
            pq.pop();
            if(visited[u])continue;
            visited[u] = true;
            
            for(int v=0;v<n;v++){
                if(graph[u][v] !=0 && !visited[v] && dist[v] > dist[u]+graph[u][v]){
                    dist[v] = dist[u] + graph[u][v];
                    pq.push(make_pair(dist[v], v));
                }
            }
        }
        
        return dist;
        
    }
};


