int solve(int n, int arr[])
	{
	    //base condition
	    if(n<0)
	    return 0;
	    
	    if(n==0)
	    return arr[n];
	    //recursion body
	    int pick=arr[n]+solve(n-2,arr);
	    
	    int nonpick=0+solve(n-1,arr);
	    //return type
	    
	    return max(pick,nonpick);
	}
	int findMaxSum(int *arr, int n) {
	    // code here
	    solve(n-1,arr);
	}
