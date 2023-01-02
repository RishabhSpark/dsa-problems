void booleanMatrix(int mat[ROWS][COLS],int m,int n)
{
    //Your code here
    for(int i=0; i<m; i++){
        sort(mat[i], mat[i] + n, greater<int>());
        if(mat[i][0]==1){
            for(int j=0; j<n; j++){
                mat[i][j]=1;
            }
        }
    }
}
