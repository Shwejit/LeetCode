class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> mpp;
        unordered_map<char, int> mpp1;

        for (int i = 0; i < s1.length(); i++) {
            mpp[s1[i]]++;
        }
        int count=0;
        int i = 0;
        int j = s1.length() - 1;
        mpp1=mpp;
        while(i<=j && j<s2.length()){
            
            if(mpp1[s2[i]]>0){
                mpp1[s2[i]]--;
                count++;
            }
            else{
                count=0;
                mpp1=mpp;
                j++;
            }

            i++;
            if(count==s1.length()){
                return true;
            }
        }
        return false;
    }
};