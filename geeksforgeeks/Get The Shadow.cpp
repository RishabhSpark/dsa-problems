#include <iostream>
using namespace std;

void find_number(int arr[],int n){
    int i;
    for (i = 0; i < n; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << " ";
    }
 
 
    for (i = 0; i < n; i++) {
        if (arr[i] > 0)
            cout << (i + 1)<<"\n";
    }
    
}

int main() {
	//code
	int T;
	cin>>T;
	for(int x=0; x<T; x++){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    find_number(arr, n);
	}
	return 0;
}