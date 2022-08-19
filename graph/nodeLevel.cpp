	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    int level=0;
	    vector<bool>vis(V,false);
	    
	    queue<int>q;
	    q.push(0);
	    vis[0]=true;
	    while(!q.empty())
	    {
	        
	        int size=q.size();
	        level++;
	        
	        while(size--)
	        {
	            int node=q.front();
	            q.pop();
	            for(auto e: adj[node])
	            {
	                if(!vis[e])
	                {
	                    vis[e]=true;
	                     q.push(e);
	                
	                     if(e==X)
	                      return level;
	                }
	              
	            }
	        }
	    }
	    return -1;
	}
