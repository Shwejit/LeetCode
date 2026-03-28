class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, j=0;
        int len=0;
        int maxlen=0;
        unordered_map<char,int> mpp;
        
        while(j<s.length()){
            if(mpp.find(s[j])!=mpp.end()){
                if(i<=mpp[s[j]]){
                i=mpp[s[j]]+1;
                }
            }
            len=j-i+1;
            maxlen=max(maxlen,len);
            mpp[s[j]]=j;
            j++;
        }
        return maxlen;
    }
};