class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans = 0;
        for(int i=1; i<=arr.size(); i+=2){
            for(int j=0, sum=0; j<arr.size(); ++j){
                sum+=arr[j];
                if(j>=i) sum-=arr[j-i];
                if(j>=i-1) ans+=sum;
            }
        }
        return ans;
    }
};