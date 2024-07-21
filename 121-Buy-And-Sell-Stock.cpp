class Solution {
public:
    int maxProfit(vector<int>& prices) {
       if (prices.empty()) {
        return 0;
       }

       int buy = prices[0];
       int sell = 0;

       for(int price : prices){
        buy= min(buy, price);
        sell = max(sell, price-buy);
       }
       return sell;
    }
};
