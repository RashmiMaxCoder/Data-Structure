
int solve(int i,int j1,int j2,int n,int m,vector<vector<int>> &grid)
{
    
    if(j1<0 ||j1 >=m || j2<0 ||j2 >=m )
        return -1e9;
    if(i==n-1)
    {
        if(j1==j2)
            return grid[i][j1];
        else
            return grid[i][j1]+grid[i][j2];
    }
    int maxi=-1e9;
    for(int di=-1;di<=1;di++)
    {
        for(int dj=-1;dj<=1;dj++)
        {
            int ans;
            if(j1==j2)
                ans=grid[i][j1]+solve(i+1,j1+di,j2+dj,n,m,grid);
            else
                ans=grid[i][j1]+grid[i][j2]+solve(i+1,j1+di,j2+dj,n,m,grid);
            maxi=max(ans,maxi);
        }
    }
    return maxi;
}

int maximumChocolates(int r, int c, vector<vector<int>> &grid) {
    // Write your code here.
    return solve(0,0,c-1,r,c,grid);
    
}
