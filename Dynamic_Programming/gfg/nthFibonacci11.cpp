class Solution {
  public:
  #define mod 1000000007
  
long long int fibo(int n, vector<long long int> &vec)
  {
      if(n<=1)
        return n;
        
          if(vec[n]!= -1)
        return vec[n];
        
          return vec[n]=(fibo(n-1,vec)%mod+fibo(n-2,vec)%mod)%mod;
  }
    long long int nthFibonacci(long long int n){
        // code here
        vector<long long int> vec(n+1,-1);
        long long int res= fibo(n,vec);
        return res; 
    }
};
