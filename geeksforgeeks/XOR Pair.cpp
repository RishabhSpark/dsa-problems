#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool xorPair(int arr[], int n, int x){
    bool result = 0;
    unordered_map<int, int> m;
 
    for (int i=0; i<n ; i++){
        int curr_xor =  x^arr[i];
        
        if (m.find(curr_xor) != m.end()){
            result = 1;
            break;
        }
        m[arr[i]]++;
    }
    return result;
}

int main() {
	//code
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int n, c;
	    cin>>n>>c;
	    int arr[n];
	    for(int j=0; j<n; j++){
	        cin>>arr[j];
	    }
	    bool ans = xorPair(arr, n, c);
	    if(ans==1) cout<<"Yes\n";
	    else cout<<"No\n";
	}
	return 0;
}