class Solution{
    public:
    // You need to complete this function
    long long count=0;
    
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        count++;
        if(N==1){
            cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<"\n";
            return count;
        }
        toh(N-1, from, aux, to);
        cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<"\n";
        toh(N-1,aux, to, from);
    }
};
