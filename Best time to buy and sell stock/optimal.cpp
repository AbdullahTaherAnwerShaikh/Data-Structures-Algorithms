class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price;
            }
            else {
                int temp = price - minPrice;
                if (temp > maxProfit) {
                    maxProfit = temp;
                }

            }
        }
        return maxProfit;
    }
};