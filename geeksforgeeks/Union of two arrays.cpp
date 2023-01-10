class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        unordered_set<int> set;
        for(int i=0; i<n; i++){
            set.insert(a[i]);
        }
        for(int i=0; i<m; i++){
            set.insert(b[i]);
        }
        return set.size();
    }
};