class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=0,mini=100000;
        
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            diff=max(diff, prices[i]-mini);
        }
        return diff;
    }
};