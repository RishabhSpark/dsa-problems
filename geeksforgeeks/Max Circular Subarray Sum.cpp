class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int normalMaxSum(int arr[], int n){
    	int ans=arr[0];
        int max_sum=arr[0];
        for(int i=1; i<n; i++){
            max_sum=max(max_sum+arr[i], arr[i]);
            ans=max(ans, max_sum);
        }
        return ans;
    }
    
    int circularSubarraySum(int arr[], int num){
        int max_normal = normalMaxSum(arr, num);
    	if(max_normal < 0) return max_normal;
    	int arr_sum = 0;
    	for(int i = 0; i < num; i++){
    		arr_sum += arr[i];
    		arr[i] = -arr[i];
    	}
    	int max_circular = arr_sum + normalMaxSum(arr,num);
    	return max(max_circular, max_normal);
    }
};