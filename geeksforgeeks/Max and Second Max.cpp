class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = INT_MIN, max2= INT_MIN;
        vector<int> ans;
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         sort(arr, arr + sizeOfArray, greater<int>());
         max=arr[0];
         ans.push_back(max);
         for(int i=1; i<sizeOfArray; i++){
             if(arr[i]!=max){
                 max2=arr[i];
                 break;
             }
         }
         if(max2==INT_MIN){
             ans.push_back(-1);
         }
         else{
             ans.push_back(max2);
         }
         return ans;
    }
};