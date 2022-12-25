class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // NAIVE APPROACH
	   // int res = A;
	   // if(A>B) res = B;
	   // while(res>0){
	   //     if(A%res==0 && B%res==0) break;
	   //     res--;
	   // }
	   // return res;

		// EUCLIDEAN APPROACH
        // while(A!=B){
        //     if(A>B) A = A-B;
        //     else B = B-A;
        // }
        // return A;
    
		// OPTIMIZED EUCLIDEAN APPROACH
        if(B==0) return A;
        else return gcd(B, A%B);
	} 
};