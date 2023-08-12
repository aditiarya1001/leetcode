class Solution {
public:
     int maxProfit(std::vector<int>& prices) {
        if (prices.empty()) {
            return 0;
        }

        int minPrice = prices[0]; // Initialize with the first day's price
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); ++i) {
            maxProfit = std::max(maxProfit, prices[i] - minPrice);
            minPrice = std::min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};
    
//    int maxProfit(vector<int>& prices) {
//         int res=0;
//         int min_price=prices[0];
//         int j=1;

//         while(j<prices.size()){
//             min_price=min(prices[j],min_price);
//             res=max(res,prices[j]-min_price);
//             j++;
//         }
        
//         return res;
//     }
// };

// int maxProfit(vector<int>& prices) {
//         int res=0,lowest=INT_MAX;
//         for(int i=0;i<prices.size();i++){
//             if(prices[i]<lowest){
//                 lowest=prices[i];
//             }
//             else if(res<prices[i]-lowest){
//                 res=prices[i]-lowest;
//             }
//         }
//         return res;
//     }
// };