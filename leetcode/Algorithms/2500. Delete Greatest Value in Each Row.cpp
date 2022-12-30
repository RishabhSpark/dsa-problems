class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++){
            sort(grid[i].begin(), grid[i].end());
        }
        int ans=0;
        for(int i=0; i<grid[0].size(); i++){
            int val = grid[0][i];
            for(int j=1; j<grid.size(); j++){
                val = max(val, grid[j][i]);
            }
            ans+=val;
        }
        return ans;
    }
};