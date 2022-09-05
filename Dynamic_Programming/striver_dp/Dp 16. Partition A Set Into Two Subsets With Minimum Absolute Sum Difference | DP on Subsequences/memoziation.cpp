bool solve(int ind, int target, int arr[], vector <vector< int >> & dp) 
  {
    if (target == 0)
    return dp[ind][target]=true;
    if (ind == 0)
    return dp[ind][target] = arr[0] == target;
    if (dp[ind][target] != -1)
    return dp[ind][target];
    bool notTaken = solve(ind - 1, target, arr, dp);
    bool taken = false;
    if (arr[ind] <= target)
    taken = solve(ind - 1, target - arr[ind], arr, dp);
    return dp[ind][target] = notTaken || taken;
    }

		int minDifference(int arr[], int n)  
		{ 
	    // Your code goes here
	    
	    int sum=0;
	    
	    sum = accumulate(arr,arr+n,0);
	  
	   vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
	   
	   for(int i=0;i<=sum;i++)
	   {
	       bool dummy=solve(n-1,i,arr,dp);
	   }
	   
	   int mini=1e9;
	   
	   for(int i=0;i<=sum;i++)
	   {
	       if(dp[n-1][i]==true)
	       {
    	       int diff=abs(i-(sum-i));
    	       mini= min(mini,diff);
	       }
	   }
	   return mini;
	    
	} 
