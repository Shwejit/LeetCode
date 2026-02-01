class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int i=0;
        while(i<nums.size()){
            if(mpp.find(nums[i])!=mpp.end()){
                if(abs(i-mpp.find(nums[i])->second)<=k){
                    return true;
                }
            }
            mpp[nums[i]]=i;
            i++;
        }
        return false;
    }
};