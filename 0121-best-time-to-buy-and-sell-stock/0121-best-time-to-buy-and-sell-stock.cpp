class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
      
        
        int ma = 0;
        int mi = INT_MAX;
        
        for(int i=0;i<prices.size();i++){
            mi = min(mi, prices[i]);
            ma = max(ma, prices[i] - mi);
            
    }
        return ma;}
};