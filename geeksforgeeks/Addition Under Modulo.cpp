class Solution{
    public:
        long long sumUnderModulo(long long a,long long b)
    {
        // code here
        long long M = 1000000007;
        return ((a%M)+(b%M))%M;
    }
};