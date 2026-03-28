class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        int len=0;
        int maxlen=0;
        unordered_map<char,int> mpp;
        
        while(j<s.length()){
            if(mpp.find(s[j])!=mpp.end()){
                i=max(i, mpp[s[j]]+1)
            }
            maxlen=max(maxlen,j-i+1);
            mpp[s[j]]=j;
            j++;
        }
        return maxlen;
    }
};