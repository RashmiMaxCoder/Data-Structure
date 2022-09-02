 int solve(int i,int j,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
        return 0;
        
        if(i==0 && j==0)
        return 1;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        int left=solve(i,j-1,dp);
        
        int up=solve(i-1,j,dp);
        
        return dp[i][j]=left+up;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>> dp(a+1,vector<int>(b+1,-1));
        return solve(a-1,b-1,dp);
    }
