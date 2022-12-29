class Solution
{   
    public:  
    //Function to find transpose of a matrix.
    void transpose(vector<vector<int> >& matrix, int n)
    { 
        // code here 
        for(int i=0; i<matrix.size(); i++){
            for(int j=i+1; j<matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};