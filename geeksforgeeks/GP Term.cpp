class Solution{
    public:
        //Complete this function
    double termOfGP(int A,int B,int N)
    {
        //Your code here
        double R = B*1.0/A;
        return (A*(pow(R, N - 1)));
        // return R;
    }
};