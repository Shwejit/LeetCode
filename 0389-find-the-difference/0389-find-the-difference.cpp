class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            if(mpp[t[i]]>0){
                mpp[t[i]]--;
            }
            else{
                return t[i];
            }
        }
        return t[0];
    }
};