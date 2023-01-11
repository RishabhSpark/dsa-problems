class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<int, int> mp;
        for(int i=0; i<N; i++){
            mp[A[i]]++;
        }
        for(int i=0; i<N; i++){
            mp[B[i]]--;
            if(mp[B[i]]==0) mp.erase(B[i]);
        }
        if(mp.size()==0) return true;
        return false;
    }
};