class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        if(n<=2) return n;

        dp[1]=1;
        dp[2]=2;
        int i=3;
        while(i<=n){
            dp[i]=dp[i-1]+dp[i-2];
            i++;
        }
        return dp[n];

    }
};