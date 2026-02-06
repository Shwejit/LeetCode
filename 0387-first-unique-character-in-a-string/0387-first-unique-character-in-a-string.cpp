class Solution {
public:
    int firstUniqChar(string s) {
        //BRUTE FORCE -> using hash map
        // unordered_map<char,int> mpp;
        // for(char ch : s)
        //     mpp[ch]++;
        // for(int i = 0; i < s.length(); i++)
        // {
        //     if(mpp[s[i]] == 1)
        //         return i;
        // }
        // return -1;

        //OPTIMAL -> using an array/vector

        vector<int> countletters(26,0);
        for(auto &ch : s){
            countletters[ch-'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(countletters[s[i]-'a']==1){
                return i;
            }
        }
        return -1;
    }
};
