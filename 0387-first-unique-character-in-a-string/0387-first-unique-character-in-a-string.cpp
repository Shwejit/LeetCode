class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;
        
        // Step 1: count frequency
        for(char ch : s)
            mpp[ch]++;
        
        // Step 2: find first unique char index
        for(int i = 0; i < s.length(); i++)
        {
            if(mpp[s[i]] == 1)
                return i;
        }
        
        return -1;
    }
};
