class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int ld=0;
            int min=INT_MAX;
            for(int i=0;i<prices.size();i++){
                    if(prices[i]<min){
                            min=prices[i];
                    } else
                    {
                            ld=max(ld,prices[i]-min);
                    }
            }
     
        return ld;
    }
};