class Solution{
    public:
    //Function to find median of the array elements.
    int median(int A[],int N)
    {
        
        
        
        //your code here
        //If median is in fraction then convert it to integer and return
        sort(A,A+N);
        int middle_element;
        if(N%2!=0) middle_element = A[N/2];
        else middle_element = (A[N/2] + A[(N-1)/2])/2;
        return middle_element;
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here
        int summ=0;
        for(int i=0; i<N; i++){
            summ+=A[i];
        }
        return summ/N;
    }
};