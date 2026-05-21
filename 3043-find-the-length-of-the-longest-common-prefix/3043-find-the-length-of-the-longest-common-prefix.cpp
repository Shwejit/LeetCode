class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mpp;
        int count=0;
        for (int i = 0; i < arr1.size(); i++) {
            
            int d=arr1[i];
            while (d > 0) {
                
                if (mpp.find(d) == mpp.end()) {
                    mpp[d] = to_string(d).size();
                }
                d = d / 10;
                
            }
        }
        for(int i=0;i<arr2.size();i++){
            int d=arr2[i];
            while(d>0){
            if(mpp.find(d)!=mpp.end()){
                count=max(count,mpp[d]);
            }
            d=d/10;
            }
        }
        return count;
    }
};