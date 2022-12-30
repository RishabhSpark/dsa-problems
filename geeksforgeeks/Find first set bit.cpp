class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n==0) return 0;
        int position=1;
        int m=1;
        while(!(n&m)){
            m<<=1;
            position++;
        }
        return position;
    }
};