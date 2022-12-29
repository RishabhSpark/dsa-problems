class Solution{
    public:
    bool isPrime(int N){
        for (int i = 2; i * i <= N; i++) {
            if (N % i == 0) return false;
        }
        return true;
    }
    
    int exactly3Divisors(int N){
        //Your code here
        int count = 0;
        if(N==1 || N==2 ||N==3) return 0;
        for(int i=2; i*i<=N; i++){
            if(isPrime(i)){
                if(i*i<=N) count++;
            }
        }
        return count;
    }
};