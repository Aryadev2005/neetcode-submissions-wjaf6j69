class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int left = 0 ;
        int right = prices.size()-1;
        int max1 = 0;
        while(left < prices.size()){
            max1 = max(max1,prices[right] - prices[left]);
            right--;
            if(right<=left){
                left++;
                right = prices.size()-1;
            }
        }
        return max1;
    }
};
