#include <iostream>
using namespace std;

int count_operations(int n){
    int count = 0;
    while (n > 1) {
        count++;
        if(n%2==0) n/=2;
        else if(n%4==1||n==3) n-=1;
        else n+=1;
    }
    return count;
}

int main() {
	//code
	int T;
	cin>>T;
	for(int x=0; x<T; x++){
	    int n;
	    cin>>n;
	    cout<<count_operations(n)<<"\n";
	}
	return 0;
}