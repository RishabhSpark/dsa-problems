class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_map<int, int> mp;
        // vector<int> intersection;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        int count=0;
        for(int i=0; i<m; i++){
            if(mp.find(b[i])!=mp.end()){
                mp.erase(b[i]);
                count++;
            }
        }
        // int count=0;
        // for(auto x: mp){
        //     if(x.second>1) count++;
        // }
        return count;
    }
};