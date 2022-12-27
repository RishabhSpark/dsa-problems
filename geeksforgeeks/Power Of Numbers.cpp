class Solution{
    public:
    long long power(int N,int R){
        if(R==0||N==1) return 1;
        
        long long ans=power(N,R/2);
        ans=(ans*ans)%mod;
        
        if(R%2==0) return (ans)%mod;
        else return (ans*N)%mod;
    }

};