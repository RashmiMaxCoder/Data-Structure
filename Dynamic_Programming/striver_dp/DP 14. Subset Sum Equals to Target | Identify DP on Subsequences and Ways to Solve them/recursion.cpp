bool solve(int i,int target,vector<int> &arr)
{
    if(target== 0)
       return true;
    if(i==0)
        return arr[0]==target;
    
    bool notpick=solve(i-1,target,arr);  
    
    bool pick=false;
    if(arr[i]<=target)    
         pick=solve(i-1,target-arr[i],arr);
    
    return pick||notpick;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    return solve(n-1,k,arr);
    
}
