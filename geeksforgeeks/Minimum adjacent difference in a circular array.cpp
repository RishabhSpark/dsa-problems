class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int left_diff = 0;
        int right_diff = 0;
        // int temp;
        int ans[n];
        for(int i=0; i<n; i++){
            // int temp = arr[i];
            if(i==0){
                ans[0] = min(abs(arr[0]-arr[n-1]), abs(arr[0]-arr[1]));
            }
            else if(i>0 && i<n-1){
                ans[i] = min(abs(arr[i]-arr[i-1]), abs(arr[i]-arr[i+1]));
            }
            else{
                ans[n-1] = min(abs(arr[n-1]-arr[n-2]), abs(arr[n-1]-arr[0]));
            }
        }
        sort(ans, ans+n);
        return ans[0];
    }
};