class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for (int i=0; i<matrix.size(); i++){
            int l=0;
            int h=n-1;
            while(l<h){
                swap(matrix[l][i], matrix[h][i]);
                l++;
                h--;
            }
        }
    } 
};