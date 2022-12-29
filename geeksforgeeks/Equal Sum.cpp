class Solution {
  public:
    string equilibrium(int *arr, int n) {
        // code here
        int summ=0;
        for(int i=0; i<n; i++){
            summ+=arr[i];
        }
        int lsum =0;
        for(int i=0; i<n; i++){
            summ-=arr[i];
            if(lsum==summ) return "YES";
            lsum+=arr[i];
        }
        return "NO";
    }
};