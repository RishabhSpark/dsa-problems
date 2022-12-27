class Solution{
public:
    int countFactors(int N){
        //code here
        int count = 0;
        for(int i=1; i*i<=N; i++){
            if(N%i==0){
                if(N/i==i) count++;
                else count+=2;
            }
        }
        return count;
    }
};