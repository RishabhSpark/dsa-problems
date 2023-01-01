class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        // Your logic here
        int k=a^b;
        int count=0;
        while(k!=0){
            k=k&(k-1);
            count++;
        }
        return count;
    }
};