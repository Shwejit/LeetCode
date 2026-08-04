class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            if(nums[i]<mini){
                mini=nums[i];
            }
        }
        for(int i=mini;i<=maxi;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    cnt++;
                }
            }
            if(cnt==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};