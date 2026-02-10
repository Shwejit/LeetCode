class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //BRUTE FORCE
        unordered_map<char, int> mpp;
        int count = 0;
        int len = s1.length();

        for (int i = 0; i < s1.length(); i++) {
            mpp[s1[i]]++;
        }

        int i = 0;
        int j = len-1;
        while (j < s2.length()) {
            unordered_map<char, int> mpp2=mpp;
            count=0;
            for (int k = i; k <= j; k++) {
                if(mpp2[s2[k]]>0){
                    mpp2[s2[k]]--;
                    count++;
                }
                
                if(count==len){
                    return true;
                }
            }
            i++;
            j++;
        }
        return false;
    }
};