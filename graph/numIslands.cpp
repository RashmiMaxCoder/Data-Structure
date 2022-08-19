void dfs(int i,int j,vector<vector<bool>>&vis,vector<vector<char>>& grid)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]=='0'||vis[i][j]==1)
        {
            return;
        }
 
        vis[i][j]=true;
 
        dfs(i+1,j,vis,grid);//down
        dfs(i,j+1,vis,grid);//right
        dfs(i,j-1,vis,grid);//left
        dfs(i-1,j,vis,grid);//up
        
        dfs(i+1,j+1,vis,grid);//down right
        dfs(i-1,j+1,vis,grid);//up right
        dfs(i-1,j-1,vis,grid);//up left
        dfs(i+1,j-1,vis,grid);//down left
 
    }
 
    int numIslands(vector<vector<char>>& grid)
    {
        int row=grid.size();
        int col=grid[0].size();
       
        int count=0;
 
        vector<vector<bool>>vis(row,vector<bool>(col, false));
 
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1'&&vis[i][j]==0)
                {
                    dfs(i,j,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
// leetcode:-
  void solve(int i,int j,vector<vector<bool>> &vis,vector<vector<char>> &grid)
    {
        if(i<0 || j<0 ||i>=grid.size() || j>=grid[0].size() || grid[i][j]=='0' || vis[i][j]==1)
        {
            return;
        }
          vis[i][j]=1;
         solve(i+1,j,vis,grid);
          solve(i-1,j,vis,grid);
          solve(i,j+1,vis,grid);
          solve(i,j-1,vis,grid);
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        int count =0;
        vector<vector<bool>> vis(row,vector<bool>(col,0));
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1' && vis[i][j]==0)
                {
                    solve(i,j,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
