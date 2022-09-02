    int solve(int i,int j,vector<vector<int>> &dp)
    {
        if(i<0 || j<0)
        return 0;
        
        if(i==0 && j==0)
        return 1;
        
        int left=solve(i,j-1,dp);
        
        int up=solve(i-1,j,dp);
        
        return left+up;
    }
    int NumberOfPath(int a, int b)
    {
        //code here
        vector<vector<int>> dp;
        return solve(a-1,b-1,dp);
    }
