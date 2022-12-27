class Solution{
public:
    int geekNumber(int N){
        if(N%2==0){
            N/=2;
            if(N%2==0) return 0;
        }
        for(int i=3; i*i<=N; i+=2){
            if(N%i==0){
                N/=i;
                if(N%i==0) return 0;
            }
        }
        return 1;
    }
};