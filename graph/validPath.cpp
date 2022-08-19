class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n+1];
        for(auto e : edges)
        {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        vector<int> visited(n+1,false);
        queue<int>q;
        visited[source]=true;
        q.push(source);
        
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(auto e :adj[node])
            {
                if(!visited[e])
                {
                    q.push(e);
                    visited[e]=true;
                }
            } 
        }
        return visited[destination];
    }
};
