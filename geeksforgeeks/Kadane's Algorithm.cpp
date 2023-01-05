class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        int ans=arr[0];
        int max_sum=arr[0];
        for(int i=1; i<n; i++){
            max_sum=max(max_sum+arr[i], arr[i]);
            ans=max(ans, max_sum);
        }
        return ans;
        
    }
};