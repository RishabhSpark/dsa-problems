class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        if(n==0){
            return false;
        }
        return ((n & (n-1))==0);
    }
};