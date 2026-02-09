class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> mpp;
        int count=0;
        for(int i=0;i<chars.length();i++){
            mpp[chars[i]]++;
        }
        for(int j=0;j<words.size();j++){
            string c=words[j];
            count+=c.length();
            unordered_map<char,int> temp = mpp;
            for(int k=0;k<c.length();k++){
                if(temp[c[k]]<=0)
                {
                    count-=c.length();
                    break;
                }
                else{
                    temp[c[k]]--;
                }
            }
        }
        return count;
    }
};