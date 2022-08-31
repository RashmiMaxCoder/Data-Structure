
int solve(int n, vector<int> &heights)
{
    if(n==0)
        return 0;
    int twoJump=1e9;
    int oneJump=solve(n-1,heights)+abs(heights[n-1]-heights[n]);
    if(n>1)
       twoJump=solve(n-2,heights)+abs(heights[n-2]-heights[n]);
    return min(oneJump,twoJump);
    
}
int frogJump(int n, vector<int> &heights)
{
    // Write your code here.
    solve(n-1,heights);
}
