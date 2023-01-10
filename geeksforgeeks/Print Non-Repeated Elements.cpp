class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        //Your code here
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n; i++){
            if(mp[arr[i]]==1) ans.push_back(arr[i]); 
        }
        return ans;
    }
};