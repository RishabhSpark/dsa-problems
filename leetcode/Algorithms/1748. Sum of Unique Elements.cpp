class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> freq(101);
        for(int i: nums){
            freq[i]++;
        }
        int sum=0;
        for(int i=1; i<=100; i++){
            sum+=freq[i]==1?i:0;
        }
        return sum;
    }
};