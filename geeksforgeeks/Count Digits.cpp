class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int M = N;
        int count = 0;
        while(M>0){
            int last_digit = M%10;
            if(last_digit !=0 && N%(last_digit%10)==0) count++;
            M/=10;
        }
        return count;
    }
};