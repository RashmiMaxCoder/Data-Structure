class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i==0 && j==0)
            return grid[0][0];
        if(i<0 || j<0)
            return 1e9;
        int up=grid[i][j]+solve(i-1,j,grid);
        int left=grid[i][j]+solve(i,j-1,grid);
        return min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        
        
        return solve(row-1,col-1,grid);
    }
};
