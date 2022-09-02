class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>& mat,vector<vector<int>> &dp)
    {
        //base
         if(i>=0 && j>=0 && mat[i][j]==1)
            return 0;
     
        if(i<0 ||j<0)
            return 0;
        
        //dest to source
        if(i==0 && j==0)
            return 1;
       
        if(dp[i][j]!= -1)
            return dp[i][j];
        //body 
        int up=solve(i-1,j,mat,dp);
        int left=solve(i,j-1,mat,dp);
        
        //return
        return dp[i][j]=up+left;
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
       
        int row=mat.size();
        int col=mat[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
        
        return solve(row-1,col-1,mat,dp);
    }
};
