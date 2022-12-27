class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int summ=0;
        while(N!=0){
            int last_digit = N%10;
            N/=10;
            summ+=last_digit;
        }
        return summ;
    }
};