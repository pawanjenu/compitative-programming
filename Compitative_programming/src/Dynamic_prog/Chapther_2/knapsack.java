package Dynamic_prog.Chapther_2;

public class knapsack {
    int max_profit(int[] weights, int[] prices, int capacity, int curr){
        if (capacity <= 0 || curr < 0){
            return 0;
        }
        int profit = 0;
        if (weights[curr] <= capacity){
            profit = Integer.max(prices[curr] +max_profit(weights,prices,capacity-weights[curr],curr-1),max_profit(weights,prices,capacity,curr-1));
        }
        else {
            profit = max_profit(weights,prices,capacity,curr-1);
        }
        return profit;
    }

    public static void main(String[] args) {
        knapsack knapsack = new knapsack();
        int[] weights = new int[]{1,2,4,6};
        int[] prices = new int[]{4,2,4,7};
        System.out.println(knapsack.max_profit(weights,prices,7,3));
    }
}
