class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        if(n%2==0){
            for(int i=0; i<n; i+=2){
                swap(arr[i],arr[i+1]);
            }
        }
        else{
            for(int i=0; i<n-1; i+=2){
                swap(arr[i],arr[i+1]);
            }
        }
    }
};