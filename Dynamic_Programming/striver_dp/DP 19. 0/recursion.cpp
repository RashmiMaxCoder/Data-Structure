int solve(int w,int wt[],int val[],int i)
    {
        if(i==0)
        {
            if(wt[0]<=w)
            return val[i];
            return 0;
        }
         int nottake = 0 +solve(w,wt,val,i-1);
         
         int take=-1e9;
         if(wt[i]<=w)
       
         take=val[i]+solve(w-wt[i],wt,val,i-1);
         
         return max(take,nottake);
    }
    
    
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       return solve(W,wt,val,n-1);
    }
