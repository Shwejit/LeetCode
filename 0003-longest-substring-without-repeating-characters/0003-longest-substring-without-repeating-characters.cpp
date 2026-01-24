class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //BRUTE FORCE
        // int maxlen = 0;
        // unordered_map<int, int> mpp;
        // for (int i = 0; i < s.length(); i++) {
        //     mpp.clear();
        //     for (int j = i; j < s.length(); j++) {
        //         if (mpp.find(s[j]) != mpp.end()) {
        //             break;
        //         }
        //         mpp[s[j]]++;
        //         maxlen = max(maxlen, j - i + 1);
        //     }
        // }
        // return maxlen;

        //OPTIMAL APPROACH
        int i=0;
        int j=0;
        int maxlen=0;
        unordered_map <int, int> mpp;
        while(j<s.length()){
            if(mpp.find(s[j])!=mpp.end()){
                i=max(i,mpp[s[j]]+1);

            }
            mpp[s[j]]=j;
            maxlen=max(maxlen,j-i+1);
            j++;
        }
        return maxlen;
    }
};