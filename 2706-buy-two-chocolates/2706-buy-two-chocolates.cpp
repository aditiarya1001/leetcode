class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        int n = prices.size();
        sort(prices.begin(), prices.end());
        vector<int> prefix(n, 0);
        for (int i = 0; i < n; i++) 
        {
            prefix[i] = (prices[i] + (i == 0 ? 0 : prefix[i - 1]));
        }
        if (prefix[1] > money ) 
        {
//             if(prices[0]>money)
//             {
//                 return money;
//             }
//             else 
//             {
//             return money;
//             }
            return money;
            
        } 
        
        else if (prefix[1] < money) 
        {
            return (money-prefix[1]);
        } 
        else 
        {
            return 0;
        }
    
        // int n = prices.size();
        // sort(prices.begin(), prices.end());
        // int sum = prices[0] + prices[1];
        // if(sum > money)
        // {
        //     return money;
        // }
        // else
        // {
        //     return (money - sum);
        // }
    }
};



// 