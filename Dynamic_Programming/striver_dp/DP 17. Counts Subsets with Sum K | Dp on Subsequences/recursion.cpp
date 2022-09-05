int solve(int i,int target,vector<int> &num )
{
    if(i==0)
    {
        if(target==0 && num[0]==0)
            return 2;
        if(target==0 || target==num[0])
            return 1;
        return 0;
    }
    int nottake=solve(i-1,target,num);
     int take=0;
    if(num[i]<=target)
    take=solve(i-1,target-num[i],num);
    return take+nottake;
}

int findWays(vector<int> &num, int tar)
{
    // Write your code here.
    int n=num.size();

    return solve(n-1,tar,num);
    
}
