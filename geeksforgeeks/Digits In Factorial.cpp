class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        if(N<0) return 0;
        if(N<=1) return 1;
        double num_of_digits = 0;
        for (int i=2; i<=N; i++)
            num_of_digits+=log10(i);
     
        return floor(num_of_digits) + 1;
    }
};