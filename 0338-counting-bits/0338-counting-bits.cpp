// class Solution {
// public:
//     vector<int> countBits(int n) {
//         vector<int> ans;
//         for(int i=0;i<=n;i++){
//             ans.push_back(count(i));
//         }
//         return ans;
//     }
//     int count(int n){
//         int cnt=0;
//         if(n<=1){
//             return n;
//         }
//         while(n>0){
//             int d=n%2;
//             if(d==1){
//                 cnt++;
//             }
//             n=n/2;
//         }
//         return cnt;
//     }
// };

// OPTIMAL:
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i / 2] + (i % 2);
        }

        return dp;
    }
};