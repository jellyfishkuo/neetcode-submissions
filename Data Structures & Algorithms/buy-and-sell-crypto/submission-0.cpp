class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int ans=0,mn=3000;
        for(int i=0;i<n;i++)
        {
            if(mn>prices[i]) mn=prices[i];
            if(ans<prices[i]-mn) ans=prices[i]-mn;
        }
        return ans;
    }
};
