class Solution
{
public:
    bitset<500001> Primes;
    vector<int> sieveOfEratosthenes(int n){
        // Write Your Code here
        Primes[0] = 1;
        for (int i = 3; i*i <= n; i += 2) {
            if (Primes[i / 2] == 0) {
                for (int j = 3 * i; j <= n; j += 2 * i)
                    Primes[j / 2] = 1;
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++) {
            if (i == 2) ans.push_back(i);
            else if (i % 2 == 1 && Primes[i / 2] == 0) ans.push_back(i);
        }
        return ans;
    }
};