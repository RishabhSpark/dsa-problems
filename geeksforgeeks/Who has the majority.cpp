class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int count_x=0;
        int count_y=0;
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                count_x++;
            }
            if(arr[i]==y){
                count_y++;
            }
        }
        if(count_x>count_y) return x;
        if(count_y>count_x) return y;
        if(count_x==count_y) return min(x,y);
    }
};