 Method 1:
int largest(int arr[], int n) {
    int i,max=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<endl;
    return max;
}


Method 2:
int largest(vector<int> &arr, int n)
    {
        int max=arr[0];
       for(auto e :arr) 
       {
           if(max < e)
           max=e;
       }
       return max;
    }
Method 3 :-
     int largest(vector<int> &arr, int n)
    {
    int res = *(max_element(arr.begin(), arr.end())); 
      return res;
    }
