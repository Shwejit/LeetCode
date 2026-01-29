class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minisum=nums[0];
        int maxisum=nums[0];
        int maxi = nums[0];
        int mini = nums[0];


        for(int i=1;i<nums.size();i++){
            maxisum=max(nums[i],maxisum+nums[i]);
            maxi=max(maxi,maxisum);

            minisum=min(nums[i],minisum+nums[i]);
            mini=min(mini,minisum);
        }
        return max(abs(maxi),abs(mini));;
    }
};