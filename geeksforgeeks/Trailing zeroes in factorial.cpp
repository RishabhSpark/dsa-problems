class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0;
        for(int i=5; i<=N; i*=5){
            count+=N/i;
        }
        return count;
        // long long int prod = 1;
        // for(int i=2; i<=N; i++){
        //     prod*=i;
        // }
        // int num_of_trailing_zeroes = 0;
        // while(prod%10==0){
        //     num_of_trailing_zeroes++;
        //     prod/=10;
        // }
        // return num_of_trailing_zeroes;
    }
};