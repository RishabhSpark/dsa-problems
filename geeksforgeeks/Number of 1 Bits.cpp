class Solution {
  public:
    int setBits(int N) {
        // Write Your Code here
        int count=0;
        while(N!=0){
            count+=N&1;
            N=N>>1;
        }
        return count;
    }
};