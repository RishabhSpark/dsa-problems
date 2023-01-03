class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        for(int i=1; i<n; i++){
            a[i]=a[i]+a[i-1];
        }
        for(int i=1; i<n; i++){
            int sum_before = a[i-1];
            int sum_after = a[n-1]-a[i];
            if(sum_before==sum_after) return i+1;
        }
        return -1;
    }
};