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
