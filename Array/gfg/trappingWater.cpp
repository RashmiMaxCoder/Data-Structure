//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
         long long int res = 0;
        int left[n];
        int right[n];
 
        //left array
        left[0] = arr[0];
        for (int i = 1; i < n; i++)
        left[i] = max(left[i - 1] , arr[i]);
 
        //right array
        right[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        right[i] = max(right[i + 1] , arr[i]);
 
        // calculate 
        for (int i = 0; i < n; i++)
        {
            long long int water= (min(left[i] , right[i]) - arr[i]);
             if(water>0)
           {
               res+=water;
           }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends
