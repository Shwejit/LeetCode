class Solution {
public:
    string smallestPalindrome(string s) {
        int mid=s.length()/2;
        sort(s.begin(),s.begin()+mid);
        if(s.length()%2!=0){
        sort((s.begin()+(mid+1)),s.end(),greater<char>());
        }
        else{
            sort(s.begin()+mid,s.end(),greater<char>());
        }
        return s;
    }
};