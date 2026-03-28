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
        while (j < s2.length()) {
            mpp1 = mpp;
            for (int k = i; k <= j; k++) {
                if (mpp1[s2[k]] > 0) {
                    mpp1[s2[k]]--;
                    count++;
                }
            }
            if(count==s1.length()){
                return true;
            }
            count=0;
            i++;
            j++;
        }
        return false;
    }
};