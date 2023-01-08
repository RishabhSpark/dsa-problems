#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int countPairs(int *a, int n, int mid)
{
    int res = 0;
    for (int i = 0; i < n; ++i)
        res += upper_bound(a+i, a+n, a[i] + mid) - (a + i + 1);
    return res;
}

int kSmallestDifference(int arr[], int n, int k){
    sort(arr, arr+n);
    int low = arr[1] - arr[0];
    for (int i = 1; i <= n-2; ++i)
        low = min(low, arr[i+1] - arr[i]);
        
    int high = arr[n-1] - arr[0];
    
    while (low < high){
        int mid = (low+high)>>1;
        if (countPairs(arr, n, mid) < k)
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int a;
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    cout<<kSmallestDifference(arr, n, k)<<endl;
	}
	return 0;
}