class Solution {
public:
   int maxProfit(vector<int>& prices) {
        int res=0;
        int min_price=prices[0];
        int j=1;

        while(j<prices.size()){
            min_price=min(prices[j],min_price);
            res=max(res,prices[j]-min_price);
            j++;
        }
        
        return res;
    }
};