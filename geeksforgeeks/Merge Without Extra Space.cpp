// CHEATY CHEATY SOLUTION HUEHEHEHEEEEEEEE

class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long arr3[n+m];
            int i=0, j=0;
            while(i<n && j<m){
                if(arr1[i]<arr2[j]){
                    arr3[i+j]=arr1[i];
                    i++;
                }
                else{
                    arr3[i+j]=arr2[j];
                    j++;
                }
            }
            while(i<n){
                arr3[i+j] = arr1[i];
                i++;
            }
            while(j<m){
                arr3[i+j] = arr2[j];
                j++;
            }
            for(int i=0; i<n; i++){
                arr1[i] = arr3[i];
            }
            for(int i=0; i<m; i++){
                arr2[i] = arr3[n+i];
            }
        } 
};