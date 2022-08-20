 void dfs(vector<vector<int>> &grid, int i, int j,int row,int col,int &area)
    {
        if(i<0 || j<0 || i>=row || j>=col ||grid[i][j]== 0)
        {
            return;
        }
        
        grid[i][j]=0;
        area++;
        
        dfs(grid,i+1,j,row,col,area);
        dfs(grid,i-1,j,row,col,area);
        dfs(grid,i,j+1,row,col,area);
        dfs(grid,i,j-1,row,col,area);
        
        dfs(grid,i+1,j+1,row,col,area);
        dfs(grid,i-1,j+1,row,col,area);
        dfs(grid,i+1,j-1,row,col,area);
        dfs(grid,i-1,j-1,row,col,area);
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int row= grid.size();
        int col=grid[0].size();
        
        int maxarea=0;
        
        for(int i=0;i<row;i++)
        {
            for(int j=0;j< col;j++)
            {
                if(grid[i][j] == 1)
                {
                    int area=0;
                    
                    dfs(grid,i,j,row,col,area);
                    maxarea= max(maxarea,area);
                }
            }
        }
        return maxarea;
    }
