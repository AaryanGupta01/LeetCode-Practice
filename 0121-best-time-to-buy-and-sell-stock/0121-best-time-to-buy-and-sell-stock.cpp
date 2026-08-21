class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1){
            return 0;
        }
        int min = prices[0],tot_pro = 0,max = 0;
        for(int i=1;i<prices.size();i++){
           if(prices[i] < min){
                min = prices[i];
           }
           else{
                tot_pro = prices[i] - min;
                if(tot_pro > max){
                    max = tot_pro;
                }
           }
        }
        return max;
    }
};