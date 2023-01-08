#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	for(int x=0; x<t; x++){
	    string s;
	    cin>>s;
	    int av;
	    int summ=0;
	    for (int i=0; i<s.length(); i++){
            summ+=(int)s[i];
        }
        av = summ/s.length();
        cout<<av<<"\n";
	}
	return 0;
}