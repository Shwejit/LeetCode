class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int summax=nums[0];
        int summin=nums[0];
        int mini=nums[0];
        int maxi=nums[0];
        int total=nums[0];
        for(int i=1;i<nums.size();i++){
            summax=max(nums[i],summax+nums[i]);
            maxi=max(maxi,summax);

            summin=min(nums[i],summin+nums[i]);
            mini=min(mini,summin);

            total+=nums[i];
        }
        if(maxi<0){
            return maxi;
        }
        return max(maxi,total-mini);
    }
};