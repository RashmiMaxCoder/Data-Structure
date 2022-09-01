	int solve(int n,int arr[],vector<int>&dp)
	{
	    if(n<0)
	    return 0;
	    
	    if(n==0)
	    return arr[n];
	    
	    if(dp[n]!= -1)
	    return dp[n];
	    
	    int pick=arr[n]+solve(n-2,arr,dp);
	    
	    int notPick=0+solve(n-1,arr,dp);
	    
	    return dp[n]=max(pick,notPick);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int> dp(n,-1);
    	 return solve(n-1,arr,dp);
	}
