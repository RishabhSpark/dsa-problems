class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        unordered_map<int, int> mp;
        for(int i=0; i<logs.size(); i++){
            for(int j=logs[i][0]; j<logs[i][1]; j++){
                mp[j]++;
            }
        }
        int maxx=0;
        int max_year=0;
        for(auto x:mp){
            if(x.second>maxx){
                maxx = x.second;
                max_year = x.first;
            }
            else if(x.second==maxx && x.first<max_year){
                max_year=x.first;
            }
        }
        return max_year;
    }
};