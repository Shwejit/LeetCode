class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }
        if (s.length() > 0) {
            for (int i = 0; i < t.length(); i++) {
                mpp[t[i]]--;
            }
            for(auto c:mpp)            
            if(c.second!=0){
                return c.first;
            }
        }
        return t[0];
    }
};