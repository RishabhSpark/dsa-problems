class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1= coordinates[1][0], x0 = coordinates[0][0];
        int y1 = coordinates[1][1], y0 = coordinates[0][1];
        int x1_x0 = x1-x0, y1_y0 = y1-y0;
        // float slope;
        // int flag = -1;
        // if(x1_x0!=0){
        //     slope = y1_y0/x1_x0;
        //     flag = 0;
        // }
        // else slope = x1_x0/y1_y0;
        for(int i=2; i<coordinates.size(); i++){
            // int x_diff = coordinates[i][0] - coordinates[i-1][0];
            // int y_diff = coordinates[i][1] - coordinates[i-1][1];
            int x = coordinates[i][0], y = coordinates[i][1];
            if (x1_x0 * (y - y1) != y1_y0 * (x - x1)){
                return false;
            }
        //     float slope_diff;
        //     if(x_diff!=0) slope_diff = y_diff/x_diff;
        //     else slope_diff = x_diff/y_diff;
        //     if(slope!=slope_diff) return false;
        }
        return true;
    }
};