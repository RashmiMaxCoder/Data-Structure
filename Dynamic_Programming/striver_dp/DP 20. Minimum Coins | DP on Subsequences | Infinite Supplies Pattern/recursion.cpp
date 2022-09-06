	int solve(int coins[],int i,int target)
	{
	    if(i==0)
	    {
	        if(target % coins[0]==0)
	            return target/coins[0];
	        else
	            return 1e9;
	    }
	    int nottake= 0+solve(coins,i-1,target);
	    
	    int take=1e9;
	    if(coins[i]<=target)
	    take=1+solve(coins,i,target-coins[i]);
	    
	    return min(take,nottake);
	}
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	  int res=  solve(coins,M-1,V);
	  return (res==1e9)?-1:res;
	} 
