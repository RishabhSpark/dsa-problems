class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        unordered_map<string, int> mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        string name;
        int max_votes=0;
        for(auto x: mp){
            if(x.second>max_votes){
                name = x.first;
                max_votes = x.second;
            }
            else if(x.second == max_votes && name>x.first){
                name = x.first;
            }
        }
        vector<string> ans;
        ans.push_back(name);
        ans.push_back(to_string(max_votes));
        return ans;
    }
};