class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen=0;
        int len=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            len=1;
            count=0;
            for(int j=i+1;j<s.length();j++){
                if(s[j]!=s[i]){
                    if(count<k){
                        len++;
                    }
                    else{
                        break;
                    }
                    count++;
                }
                else{
                    len++;
                }
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};