class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        while(d>n){
            d%=n;
        }
        
        int ans[n];
        int k=0;
        
        for (int i=d; i<n; i++) {
            ans[k] = arr[i];
            k++;
        }
        
        for (int i=0; i<d; i++) {
            ans[k] = arr[i];
            k++;
        }
        
        for (int i=0; i<n; i++) {
            arr[i] = ans[i];
        }
    }
};