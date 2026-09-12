class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprice = 0;
        int bestday = prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestday){
                maxprice = max(maxprice,prices[i]-bestday);
            }
            bestday = min(bestday,prices[i]);
        }
        return maxprice;
    }
};