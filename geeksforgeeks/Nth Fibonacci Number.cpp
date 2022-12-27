class Solution {
  public:
    long long int nthFibonacci(long long int n){
        // code here
        int a = 0;
        int b = 1;
        int c=1;
        for(int i=2; i<=n; i++){
            c = (a+b)%1000000007;
            a = b;
            b = c;
        }
        return b;
    }
};