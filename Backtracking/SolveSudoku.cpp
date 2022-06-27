 bool isSafe(int row,int col,int val,int n, int grid[N][N])
    {
        for(int i=0;i<n;i++)
        {
            if(grid[row][i]==val)
            return false;
            if(grid[i][col]==val)
            return false;
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val)
            return false;
        }
        return true;
    }
    
    bool solve(int grid[N][N])
    {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(grid[i][j]==0)
                {
                    for(int k=1;k<=9;k++)
                    {
                        if(isSafe(i,j,k,N,grid))
                        {
                            grid[i][j]=k;
                            bool isPossible=solve(grid);
                            if(isPossible)
                            return true;
                            else
                            grid[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        return solve(grid);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout<<grid[i][j]<<" ";
            }
        }
    }
