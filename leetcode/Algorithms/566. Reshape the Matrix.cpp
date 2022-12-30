class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();
        if(r * c != rows * cols) return mat;
        vector<int> flatten;
        for(int i=0; i<mat.size(); i++){
            for(int j=0;j<mat[i].size(); j++){
                flatten.push_back(mat[i][j]);
            }
        }
        mat.clear();
        vector<int> r_temp;
        for(int i=0; i<flatten.size(); i++){
            r_temp.push_back(flatten[i]);
            if(r_temp.size() == c){
                mat.push_back(r_temp);
                r_temp.clear();
            }

        }
        return mat;
    }
};