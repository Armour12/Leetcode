class Solution {
    public int maxProfit(int[] prices) {
        int maxP=0;
        int minS=prices[0];
        for(int i=0;i<prices.length;i++)
        {
            minS=Math.min(minS,prices[i]);
            int p=prices[i]-minS;
            maxP=Math.max(maxP,p);
        }
        return maxP;
    }
}