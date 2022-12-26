class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<int> ans;
	    for(int i=2; i*i<=N; i++){
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