class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
        }
        if(sum%3!=0) return false;
        int req_sum = sum/3;
        
        int curr_sum=0 , count=0;
        for(int i=0 ; i<arr.size() ; i++){
            curr_sum += arr[i];
            if(curr_sum==req_sum){
                count++;
                curr_sum=0;
            }
        }
        if(count>=3) return true;
        return false;
    }
};