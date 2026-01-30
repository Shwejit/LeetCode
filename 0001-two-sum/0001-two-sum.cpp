class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        int j=0;
        int sum=0;
        vector<int> ans;
        unordered_map<int,int> mpp;

        while(j<nums.size()){
            if(mpp.find(target-nums[j])!=mpp.end()){
                ans.push_back(mpp.find(target-nums[j])->second);
                ans.push_back(j);
            }
            else{
                mpp[nums[j]]=j;
            }
            j++;
        }
        return ans;
    }
};