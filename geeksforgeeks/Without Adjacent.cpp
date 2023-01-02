long long FindMaxSum(long long arr[], int n) 
{
    //Your code here
    int inc = arr[0];
    int exc = 0;
    int exc_n;
    int i;
 
    for (i = 1; i < n; i++) {
        exc_n = max(inc, exc);
        inc = exc + arr[i];
        exc = exc_n;
    }
    return max(inc, exc);
}