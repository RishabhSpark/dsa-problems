class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int minele=prices[0];
        for(int i=1; i<prices.size(); i++){
            minele=min(prices[i], minele);
            profit=max(profit, prices[i]-minele);
        }
        return profit;
    }
};