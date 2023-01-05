class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        int max_occ_idx=0;
        int count=1;
        for(int i=1; i<size; i++){
            if(a[i]==a[max_occ_idx]) count++;
            else count--;
            if(count==0){
                max_occ_idx=i;
                count=1;
            }
        }
        int c=0;
        for(int i=0; i<size; i++){
            if(a[i]==a[max_occ_idx]) c++;
        }
        if(c>size/2) return a[max_occ_idx];
        return -1;
    }
};