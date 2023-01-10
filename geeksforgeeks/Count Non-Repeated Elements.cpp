class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        int count=0;
        for(auto x: mp){
            if(x.second==1) count++;
        }
        return count;
    }

};