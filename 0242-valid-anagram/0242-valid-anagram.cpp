class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        for (int i = 0; i < s.length(); i++) {
            mpp[s[i]]++;
        }
        if (s.length() == t.length()) {
            for (int i = 0; i < t.length(); i++) {
                if (mpp.find(t[i]) != mpp.end() && mpp[t[i]]>0) {
                    mpp[t[i]]--;
                } else {
                    return false;
                }
            }
        }
        else{
            return false;
        }

        return true;
    }
};