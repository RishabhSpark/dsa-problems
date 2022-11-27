class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(int j=0; j<queries.size(); j++){
            int xj = queries[j][0];
            int yj = queries[j][1];
            int radius = queries[j][2];
            int no_of_points = 0;
            for(int i=0; i<points.size(); i++){
                int xi = points[i][0];
                int yi = points[i][1];
                float distance = sqrt((xi-xj)*(xi-xj) + (yi-yj)*(yi-yj));
                if(distance<=radius) no_of_points+=1;
            }
            ans.push_back(no_of_points);
        }
        return ans;
    }
};