class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size(), -1);
        solve(0,cost,dp);
        return min(dp[0],dp[1]);
    }
    int solve(int i, vector<int>& cost,vector<int>& dp ){
        if(i>=cost.size()){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }

        int onestep = cost[i]+solve(i+1,cost,dp);
        int twostep = cost[i]+solve(i+2,cost,dp);

        dp[i]=min(onestep,twostep);

        return dp[i];
    }
};