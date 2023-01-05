class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lmax_arr[n];
        int rmax_arr[n];
        int lmax=arr[0];
        lmax_arr[0] = lmax;
        for(int i=1; i<n; i++){
            lmax_arr[i]=max(lmax_arr[i-1], arr[i]);
        }
        
        int rmax=arr[n-1];
        rmax_arr[n-1] = rmax;
        for(int i=n-2; i>=0; i--){
            rmax_arr[i]=max(rmax_arr[i+1], arr[i]);
        }
        
        long long ans=0;
        for(int i=0; i<n; i++){
            ans+=min(lmax_arr[i], rmax_arr[i])-arr[i];
        }
        return ans;
    }
};