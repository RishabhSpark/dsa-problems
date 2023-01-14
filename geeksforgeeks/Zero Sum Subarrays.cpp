class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        int count=0;
        unordered_map<long long, long long> mp;
        int prefix_sum=0;
        for(int i=0; i<n; i++){
            prefix_sum+=arr[i];
            if(mp.find(prefix_sum)!=mp.end()){
                count+=mp[prefix_sum];
            }
            if(prefix_sum==0) count++;
            mp[prefix_sum]++;
        }
        return count;
    }
};