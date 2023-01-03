class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here.
        vector<int> ans;
        int right_max=a[n-1];
        ans.push_back(right_max);
        for(int i=n-2; i>=0; i--){
            if(a[i]>=right_max){
                right_max=a[i];
                ans.push_back(right_max);
            }
        }
        for(int i=0; i<ans.size()/2; i++){
            swap(ans[i], ans[ans.size()-1-i]);
        }
        return ans;
    }
};