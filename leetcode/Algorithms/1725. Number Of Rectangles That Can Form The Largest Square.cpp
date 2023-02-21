class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max_length = min(rectangles[0][0], rectangles[0][1]);
        int count = 1;
        for(int i=1; i<rectangles.size(); i++){
            int min_length = min(rectangles[i][0], rectangles[i][1]);
            if(min_length==max_length) count++;
            else if(min_length>max_length){
                max_length = min_length;
                count=1;
            }
        }
        return count;
    }
};