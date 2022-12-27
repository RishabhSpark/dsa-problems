class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int summ = ((n+1)*(n))/2;
        for(int i=0; i<array.size(); i++){
            summ-=array[i];
        }
        return summ;
    }
};