class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int max_prof=0,left=0,right=1;
        int n=prices.size();
        int cp;
        for(right;right<n;right++) 
        {
            if(prices[left]<prices[right])
                {
                    cp=prices[right]-prices[left];
                    max_prof=max(cp,max_prof);
                }
            else if(prices[right]<=prices[left])
                left=right;
        }
        return max_prof;
    }
};
