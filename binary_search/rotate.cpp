void rotate(int arr[], int n)
{
    // 1 2 3 4 5
    // 5 1 2 3 4
   rotate(arr,arr + n - 1, arr + n); // right rotate
   // rotate(arr,arr + 1, arr + n);  left rotate
//   1 2 3 4 5
//   2 3 4 5 1
}



void rotate(int arr[], int n)
{
    int x=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}


void rotate(int arr[], int n)
{   int temp=0;
    temp=arr[n-1];
    int arr2[n];
    arr2[0]=temp;
    
    for(int i=0;i<n-1;i++){
        arr2[i+1]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=arr2[i];
    }
}
