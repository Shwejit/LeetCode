class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //BRUTE FORCE
        // unordered_map<char, int> mpp;
        // int count = 0;
        // int len = s1.length();

        // for (int i = 0; i < s1.length(); i++) {
        //     mpp[s1[i]]++;
        // }

        // int i = 0;
        // int j = len-1;
        // while (j < s2.length()) {
        //     unordered_map<char, int> mpp2=mpp;
        //     count=0;
        //     for (int k = i; k <= j; k++) {
        //         if(mpp2[s2[k]]>0){
        //             mpp2[s2[k]]--;
        //             count++;
        //         }
                
        //         if(count==len){
        //             return true;
        //         }
        //     }
        //     i++;
        //     j++;
        // }
        // return false;

        //OPTIMAL
        unordered_map<char, int> s1count;
        unordered_map<char, int> s2count;

        if (s1.length() > s2.length()) {
            return false;
        }
        
        for(int i=0;i<s1.length();i++){
            s1count[s1[i]]++;
            s2count[s2[i]]++;
        }
        if(s1count==s2count){
            return true;
        }
        int l=0;
        int r=s1.length();
        while(r<s2.length()){
            s2count[s2[r]]++;
            s2count[s2[l]]--;
            
            if(s2count[s2[l]]==0){
                s2count.erase(s2[l]);
            }
            l++;
            r++;
            if(s1count==s2count){
                return true;
            }
            
        }
        return false;
    }
};