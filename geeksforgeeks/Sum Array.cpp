void sumArray(int arr[], int n)
{
   //Your code here
  int inc = arr[0];
    int exc = 0;
    int exc_n;
    int i;
    cout<<arr[0]<<" ";
    for (i = 1; i < n; i++) {
        exc_n = max(inc, exc);
        inc = exc + arr[i];
        exc = exc_n;
        cout<<max(inc, exc)<<" ";
    }
}