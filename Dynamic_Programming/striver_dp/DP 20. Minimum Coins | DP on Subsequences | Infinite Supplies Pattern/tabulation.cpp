int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   
	    vector<vector<int>> dp(M+1,vector<int>(V+1,0));
	    
	    for(int i=0;i<=V;i++)
	    {
	        if(i% coins[0]==0)
	            dp[0][i] = i/coins[0];
	        else
	            dp[0][i]= 1e9;
	    }
	   for(int i=1;i<M;i++)
	   {
	       for(int target=0;target<=V;target++)
	       {
	            int nottake= 0+dp[i-1][target];
	    
        	    int take=1e9;
        	  
        	    if(coins[i]<=target)
        	    take=1+dp[i][target-coins[i]];
        	    
        	    dp[i][target]=min(take,nottake);
	           
	       }
	   }
	   
	  int res= dp[M-1][V];
	  return (res==1e9)?-1:res;
	} 
	  
