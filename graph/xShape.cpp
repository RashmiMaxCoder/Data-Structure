  void solve(int i,int j,vector<vector<char>> &grid,int n,int m)
    {
        if(i<0 || j<0 ||i>=n ||j>=m ||grid[i][j]=='O')
            return ;
            
        grid[i][j]='O';
        
        solve(i,j+1,grid,n,m);
        solve(i,j-1,grid,n,m);
        solve(i+1,j,grid,n,m);
        solve(i-1,j,grid,n,m);
       
        
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='X')
                {
                    c++;
                    solve(i,j,grid,n,m);
                }
            }
        }
        return c;
        
    }
