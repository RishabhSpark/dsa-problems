class Solution{
    public:
        // Complete this function
    long long factorial(int N) {
        // Your code here
        long long prod = 1;
        for(int i=N; i>0; i--){
            prod*=i;
            N--;
        }
        return prod;
    }

};