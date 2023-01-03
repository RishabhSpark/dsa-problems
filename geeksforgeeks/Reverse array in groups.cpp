class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        // int l=0
        for(int i=0; i<n; i+=k){
            int l=i;
            int r=i+k-1;
            while(r>=n){
                r--;
            }
            while (l < r) swap(arr[l++], arr[r--]);
        }
    }
};