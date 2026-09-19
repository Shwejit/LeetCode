class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int  count=0;
            int v=i;
            while(v>0){
                v=v&(v-1);
                count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};