class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr, arr+n);
	    int l=0;
	    int r=n-1;
	    while(l<r){
	        if(arr[l]+arr[r]==x) return true;
	        else if(arr[l]+arr[r]<x) l++;
	        else r--;
	    }
	    return false;
	}
};