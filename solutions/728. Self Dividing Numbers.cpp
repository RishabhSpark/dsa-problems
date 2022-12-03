class Solution {
public:
    bool div(int n){
        int temp_n = n;
        int remainder;
        while(temp_n){
            remainder = temp_n%10;
            if(remainder==0 || n%remainder!=0) return false;
            temp_n/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(div(i)==true) ans.push_back(i);
        }
        return ans;
    }
};