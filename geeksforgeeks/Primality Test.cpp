class Solution{
    public:
        bool isPrime(int N){
        if(N>2){
            for(int i=2; i<N; i++){
                if(N%i==0) return false;
            }
        }
        return true;
    }
};