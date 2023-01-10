class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(int i=0; i<n; i++){
            auto temp = mp.find(arr[i]);
            if(temp->second>1) return i+1;
        }
        return -1;
    }
};