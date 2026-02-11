class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> pcount;
        unordered_map<char, int> scount;

        vector<int> count;

        if (p.length() > s.length()) {
            return count;
        }
        int l = 0;
        int r = p.length()-1;
        for (int i = 0; i < p.length(); i++) {
            pcount[p[i]]++;
            scount[s[i]]++;
        }

        while (r < s.length()) {
            if (pcount == scount) {
                count.push_back(l);
            }
            scount[s[l]]--;
            if(scount[s[l]] == 0)
                scount.erase(s[l]);
            scount[s[r+1]]++;

            l++;
            r++;
        }
        return count;
    }
};