void dfs(int node,vector<int> adj[],int vis[],vector<int> &ks)
  {
      vis[node]=1;
      ks.push_back(node);
      for(auto it: adj[node] )
      {
          if(!vis[it])
          {
              dfs(it,adj,vis,ks);
          }
      }
  }
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
       int vis[V]={0};
       int start=0;
       vector<int> ks;
       dfs(start,adj,vis,ks);
       return ks;
    }
