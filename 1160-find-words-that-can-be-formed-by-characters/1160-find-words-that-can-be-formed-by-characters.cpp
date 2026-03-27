class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> mpp;
        unordered_map<char, int> mppcopy;
        int sum = 0;

        for (int i = 0; i < chars.length(); i++) {
            mpp[chars[i]]++;
        }

        for (int i = 0; i < words.size(); i++) {
            mppcopy = mpp;
            string word = words[i];
            sum += word.length();

            for (int j = 0; j < word.length(); j++) {
                if (mppcopy.find(word[j]) != mppcopy.end() &&
                    mppcopy[word[j]] > 0) {
                    mppcopy[word[j]]--;
                } else {
                    sum -= word.length();
                    break;
                }
            }
        }

        return sum;
    }
};