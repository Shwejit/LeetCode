class Solution {
public:
    vector<int> twoSum(vector<int>& num, int tar) {
        unordered_map<int,int> m;
        for(int i=0;i<num.size();i++){
            int n=tar-num[i];
            if(m.count(n)) return {m[n],i};
            m[num[i]]=i;
        }
        return {};
    }
    // It i to DAY ?
};