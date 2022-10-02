class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;
        
        for(int i=0; i<prices.size(); i++){
            buy = min(buy, prices[i]);
            profit = max(profit, prices[i]-buy);
        }
        
        if(profit==0) return 0;
        
        return profit;
    }
};


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
        
//         int min = 0;
//         int buy, sell, profit, day;

//         for(int i=0; i<prices.size(); i++){
//             for(int j=i+1; j<prices.size(); j++){
//                 buy = prices[i];
//                 sell = prices[j];
//                 profit = sell-buy;
//                 if(profit > min){
//                     min = profit;
//                     day = i;
//                 }
            
//             }
            
//         }
//         if (min ==0) return 0;
//         else return min;
        
//     }
// };