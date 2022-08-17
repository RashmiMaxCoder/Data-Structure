 void solve(int node, stack<int> &ans, vector<int> &vis,vector<int> adj[])
    {
        vis[node]=true;
        for(auto it : adj[node])
        {
            if(!vis[it])
            solve(it,ans,vis,adj);
            
        }
        ans.push(node);
    }
    
    stack<int> toposort(int V, vector<int> adj[])
    {
        
        stack<int> st;
        vector<int> vis(V+1,false);
        
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
                solve(i,st,vis,adj);
        }
        return st;
    }
	void dfs(int node,vector<bool> &vis,vector<int> adj[])
	{
	    vis[node]=true;
	    for(auto it:adj[node])
	    {
	        if(!vis[it])
	        {
	            dfs(it,vis,adj);
	        }
	    }
	}
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        //1-topo sort
        stack<int>st = toposort(V,adj);
        //2-transpose
        vector<int> trans[V];
        
        for(int i=0;i<V;i++)
        {
            for(auto it :adj[i])
              trans[it].push_back(i);
        }
        //3-call dfs
        vector<bool> vis(V,false);
        int count=0;
        
        while(!st.empty())
        {
            int node=st.top();
            st.pop();
            
            if(!vis[node])
            {
                dfs(node,vis,trans);
                count++;
            }
        }
      return count;  
    }
