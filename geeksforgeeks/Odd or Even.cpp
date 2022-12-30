class Solution{   
public:
    string oddEven(int N){
        // code here 
        if(N&1==1) return "odd";
        return "even";
    }
};