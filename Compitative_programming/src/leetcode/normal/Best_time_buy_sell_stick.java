package leetcode.normal;

public class Best_time_buy_sell_stick {
    public int maxProfit(int[] prices) {
        int profit = 0;
        if (prices.length <= 1)
            return profit;
        int min_stock = Integer.MAX_VALUE;
        for (int i = 0; i < prices.length; i++){
            if (prices[i] > min_stock){
                profit +=(prices[i]-min_stock);
                min_stock = Integer.MAX_VALUE;
            }
            else {
                min_stock = prices[i];
            }
        }

        return profit;
    }
}
