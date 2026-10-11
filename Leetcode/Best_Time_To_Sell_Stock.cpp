class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp =0;
        int lowp =prices[0];
        
        
        int n= prices.size();
        for(int i=1;i<n;i++){
            // calculating profit
            if(maxp<prices[i]-lowp) {
                maxp= prices[i]-lowp;
            }
            lowp= min(lowp,prices[i]);

        }

        
        return maxp;
        
    }
};