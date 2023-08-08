class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        sort(prices.begin(), prices.end());
        int sum = prices[0] + prices[1];
        if(sum > money)
        {
            return money;
        }
        else
        {
            return (money - sum);
        }
    }
};



// int n = prices.size();
//         sort(prices.begin(), prices.end());
//         vector<int> prefix(n, 0);
//         for (int i = 0; i < n; i++) 
//         {
//             prefix[i] = (prices[i] + (i == 0 ? 0 : prefix[i - 1]));
//         }
//         if (prefix[1] > money) 
//         {
//             return money - prefix[1];
//         } 
//         else if (prefix[1] < money) 
//         {
//             return prefix[0];
//         } 
//         else 
//         {
//             return 0;
//         }