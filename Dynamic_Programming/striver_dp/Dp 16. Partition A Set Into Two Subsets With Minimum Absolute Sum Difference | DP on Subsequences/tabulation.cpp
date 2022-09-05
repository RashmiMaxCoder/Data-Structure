		int minDifference(int arr[], int n)  
		{ 
	    // Your code goes here
	    
	    int sum=0;
	    
	    sum = accumulate(arr,arr+n,0);
	  
	   vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    for(int i=0;i<n;i++)
    {
        dp[i][0]=true;
    }
    if(arr[0]<=sum)
        dp[0][arr[0]]=true;
    for(int i=1;i<n;i++)
    {
        for(int target=1;target<=sum;target++)
        {
             bool notpick=dp[i-1][target];  
            bool pick=false;
            if(arr[i]<=target)    
             pick=dp[i-1][target-arr[i]];
             dp[i][target]=pick||notpick;
        }
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
