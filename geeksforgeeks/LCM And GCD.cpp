class Solution {
  public:
    long long GCD(long long A, long long B){
        if(B==0) return A;
        else GCD(B, A%B);
    }
    
    long long LCM(long long A, long long B){
        return (A*B/GCD(A,B));
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        vector<long long> ans;
        ans.push_back(LCM(A, B));
        ans.push_back(GCD(A, B));
        return ans;
    }
};