class Solution{
    public:
    //Complete this function
    //Function to find the length of longest subarray of even and odd numbers.
    int maxEvenOdd(int arr[], int n) 
    { 
       //Your code here
       int count=1;
       int ans=1;
       for(int i=1; i<n; i++){
           if(((arr[i-1]%2==0) && (arr[i]%2==1)) || ((arr[i-1]%2==1) && (arr[i]%2==0))){
               count++;
               ans=max(ans, count);
           }
           else count=1;
       }
       return ans;
    } 
};