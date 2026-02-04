class Solution {
public:
    bool isAnagram(string s, string t) {
        //BRUTE FORCE
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t){
        //     return true;
        // }
        // return false;
        //OPTIMAL
        unordered_map<char, int> mpp;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            if(mpp[t[j]]<=0){
                return false;
            }
            mpp[t[j]]--;
        }
        return true;
    }
};