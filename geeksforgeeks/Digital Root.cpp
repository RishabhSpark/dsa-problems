class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        //Your code here
        int summ=0;
        
        if(n<=9) return n;
        
        while(n!=0){
            int last_digit = n%10;
            summ+=last_digit;
            n/=10;
        }
        return digitalRoot(summ);
    }
};