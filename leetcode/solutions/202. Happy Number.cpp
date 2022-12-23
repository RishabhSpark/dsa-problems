class Solution {
public:
    int sq(int n){
        if(n>=0 && n<=9){
            return n;
        }
        int ans = 0;
        while(n){
            int rem = n%10;
            int sqr = rem*rem;
            ans += sqr;
            n = n/10;
        }
        int a = sq(ans);
        return a;
    }

    bool isHappy(int n) {
        int ans = sq(n);
        if(ans==1 || ans==7) return true;
        else return false;
    }
};