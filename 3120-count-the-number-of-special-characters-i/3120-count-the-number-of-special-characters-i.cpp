class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char, int> mpp;
        unordered_set<char> cp;
        int count = 0;
        for (int i = 0; i < word.size(); i++) {
            char c;
            if(islower(word[i])){
                c=toupper(word[i]);
            }
            else{
                c=tolower(word[i]);
            }
            if(mpp.find(c)!=mpp.end() && !cp.count(tolower(word[i]))){
                count++;
                cp.insert(tolower(word[i]));
            }
                mpp[word[i]]++;

        }
        return count;
    }
};