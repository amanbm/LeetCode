class Solution {
    public int maxProfit(int[] prices) {
        
        if(prices.length < 2){
            return 0;
        }
        int delta = prices[1] - prices[0];
        int max = delta;
        for(int i = 1; i < prices.length - 1; i++){
            int currDelta = prices[i+1] - prices[i];
            delta = Math.max(currDelta, delta + currDelta);
            max = Math.max(max, delta);  
        }
        return max < 0? 0 : max; 
        
    }
}
