class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, arr[i]);
        }
        return ans;
    }
};


// class Solution
// {
// public:
//     int largest(vector<int> &arr, int n)
//     {
//         sort(arr.begin(), arr.end());
//         return arr[n-1];
//     }
// };