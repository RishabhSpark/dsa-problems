
// Function to find maximum for every adjacent pairs in the array.
void maximumAdjacent(int sizeOfArray, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
     for(int i=0; i<sizeOfArray-1; i++){
         cout<<max(arr[i], arr[i+1])<<" ";
     }
     
}