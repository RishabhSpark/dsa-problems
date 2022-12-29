class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]<=x){
                    if(matrix[i][j]==x) return true;    
                }
            }
        }
        return false;
    }
};