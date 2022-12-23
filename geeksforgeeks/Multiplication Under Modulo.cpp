class Solution{
    public:
        int multiplicationUnderModulo(long long a,long long b)
    {
        //your code here
        long long M = 1000000007;
        a%=M;
        long long res=0;
        while(b){
            if(b%2==1) res=(res+a)%M;
            a = (2*a)%M;
            b=b/2;
        }
        return res;
    }
};