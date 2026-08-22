class Solution {
public:
    bool isSubsequence(string s, string t) {
        int lastFoundIndex=-1;

        for(int i=0;i<s.size();i++){
            bool present=false;
            for(int j=lastFoundIndex+1;j<t.size();j++){
                if(s[i]==t[j]){
                    present=true;
                    if(j<lastFoundIndex){
                        return false;
                    }
                    lastFoundIndex=j;
                    break;
                }
                
            }
            if(!present){
                return false;
            }
        }

        return true;
    }
};