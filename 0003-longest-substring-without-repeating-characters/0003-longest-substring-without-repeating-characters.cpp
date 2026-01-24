class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        unordered_map<int, int> mpp;
        for (int i = 0; i < s.length(); i++) {
            mpp.clear();
            for (int j = i; j < s.length(); j++) {
                if (mpp.find(s[j]) != mpp.end()) {
                    break;
                }
                mpp[s[j]]++;
                maxlen = max(maxlen, j - i + 1);
            }
        }
        return maxlen;
    }
};