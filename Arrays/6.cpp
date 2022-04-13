class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int low = 1e9, profit =0;
        
        for(auto i : prices){
            low = min(i,low);
            profit = max(profit, i - low);
        }
        
        return profit;
    }
};
