class Solution{
    public:
    // L and R are input array
    // maxx : maximum in R[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in L[] and R[]
    //Function to find the maximum occurred integer in all ranges.
    int maxOccured(int L[], int R[], int n, int maxx){
    
        // Your code here
        int arr[maxx];
        memset(arr, 0, sizeof(arr));
        
        for(int i=0; i<n; i++){
            arr[L[i]]++;
            arr[R[i]+1]--;
        }
        
        int ans=0;
        int max_sum=arr[0];
        for(int i=1; i<maxx; i++){
            arr[i] = arr[i] + arr[i-1];
            
            if(arr[i]>max_sum){
                ans=i;
                max_sum=arr[i];
            }
        }
        return ans;
    }
};