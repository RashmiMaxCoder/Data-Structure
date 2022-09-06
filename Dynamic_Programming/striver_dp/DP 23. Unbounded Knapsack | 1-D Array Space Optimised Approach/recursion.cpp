 int solve(int i,int w,int val[],int wt[])
    {
        if(i==0)
        return (w/wt[i])*val[i];
        
        int nottake= 0+ solve(i-1,w,val,wt);
        int take=-1e9;
        if(wt[i]<=w)
        take=val[i]+solve(i,w-wt[i],val,wt);
        
        return max(nottake,take);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        
        return solve(N-1,W,val,wt);
    }
