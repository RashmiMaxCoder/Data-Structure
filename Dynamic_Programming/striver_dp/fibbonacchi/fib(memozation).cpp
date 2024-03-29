 int solve(int n, vector<int> &dp)
    {
         if(n<=1)
            return n;
        
        if(dp[n]!= -1)
            return dp[n];
        
        return dp[n]=solve(n-1,dp)+solve(n-2,dp);
    }
    
    int fib(int n) {
        
       vector<int> dp(n+1,-1);
        
       int res=solve(n,dp);
        
        return res;
        
    }
