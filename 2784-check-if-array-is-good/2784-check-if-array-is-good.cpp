class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=INT_MIN;
        unordered_map<int, int> mpp;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            
            //ans^=nums[i]^i;
            
            mpp[nums[i]]++;
            if(mpp[nums[i]]>=2){
                ans++;
            }
        }
        if(maxi+1==nums.size() && mpp[maxi]==2 && ans==1){
            return true;
        }
        return false;
    }
};