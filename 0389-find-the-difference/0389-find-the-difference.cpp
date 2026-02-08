class Solution {
public:
    char findTheDifference(string s, string t) {
        // unordered_map<char, int> mpp;
        // for(int i=0;i<s.length();i++){
        //     mpp[s[i]]++;
        // }
        // for(int i=0;i<t.length();i++){
        //     if(mpp[t[i]]>0){
        //         mpp[t[i]]--;
        //     }
        //     else{
        //         return t[i];
        //     }
        // }
        // return t[0];

        int xorval=0 ;
        for(int i=0;i<s.length();i++){
            xorval^=s[i];
        }
        for(int j=0;j<t.length();j++){
            xorval^=t[j];
        }
        return char(xorval);
    }
};