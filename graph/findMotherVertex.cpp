 void dfs(vector<int> adj[],vector<bool> &vis,int node)
    {
        vis[node]=true;
        for(auto e: adj[node])
        {
            if(!vis[e])
            {
               vis[e]=true;
               dfs(adj,vis,e);
            }
        }
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    vector<bool> vis(V,false);
	    int possibleMother=-1;
	    
	    for(int i=0;i<V;i++)
	    {
	        if(!vis[i])
	        {
	            dfs(adj,vis,i);
	            possibleMother=i;
	        }
	    }
	    for(int i=0;i<V;i++)
	    {
	        vis[i]=false;
	    }
	    dfs(adj,vis,possibleMother);
	   
	   for(int i=0;i<V;i++)
	   {
	       if(!vis[i])
	        return -1;
	   }
	   return possibleMother;
	}
