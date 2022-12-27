class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int> ans;
	    while(N%2==0){
	        ans.push_back(2);
	        N/=2;
	    }
	    for(int i=3; i*i<=N; i+=2){
	        while(N%i==0){
	            ans.push_back(i);
	            N=N/i;
	        }
	    }
	    if(N>1){
	        ans.push_back(N);
	    }
	    auto last = unique(ans.begin(), ans.end());
        ans.erase(last, ans.end()); 
	    return ans;
	}
};