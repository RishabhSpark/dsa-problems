class Solution {
public:
    int reverse(int x) {
        double rev = 0;
        while(x!=0){
            int digit = x%10;
            rev+=digit;
            rev*=10;
            x/=10;
        }
        rev/=10;
        if(rev > INT_MAX || rev < INT_MIN) return 0;
        if(x<0){
            return rev*=-1;
        }
        return rev;
    }
}; 