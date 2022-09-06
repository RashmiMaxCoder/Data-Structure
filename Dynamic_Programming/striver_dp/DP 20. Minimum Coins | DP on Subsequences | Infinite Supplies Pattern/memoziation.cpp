	int solve(int coins[],int i,int target,vector<vector<int>> &dp)
	{
	    if(i==0)
	    {
	        if(target % coins[0]==0)
	            return target/coins[0];
	        else
	            return 1e9;
	    }
	    if(dp[i][target] != -1)
	        return dp[i][target];
	   
	    int nottake= 0+solve(coins,i-1,target,dp);
	    
	    int take=1e9;
	  
	    if(coins[i]<=target)
	    take=1+solve(coins,i,target-coins[i],dp);
	    
	    return dp[i][target]=min(take,nottake);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>> dp(M+1,vector<int>(V+1,-1));
	  int res=  solve(coins,M-1,V,dp);
	  return (res==1e9)?-1:res;
	} 
	  
