class Solution
{
	public:
		string is_palindrome(int n)
		{
		    // Code here
		    int x = n;
		    int rev=0;
		    while(x!=0){
		        int last_digit = x%10;
		        x=x/10;
		        rev = rev*10+last_digit;
		    }
		    if(n==rev) return "Yes";
		    else return "No";
		}
};