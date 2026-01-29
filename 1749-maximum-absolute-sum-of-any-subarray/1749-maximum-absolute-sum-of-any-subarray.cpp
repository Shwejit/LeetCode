class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minisum=0;
        int maxisum=0;
        int maxi = INT_MIN;
        int mini = INT_MAX;

        int r=0;
        int w;

        for(int i=0;i<nums.size();i++){
            maxisum=max(nums[i],maxisum+nums[i]);
            maxi=abs(max(maxi,maxisum));

            minisum=min(nums[i],minisum+nums[i]);
            mini=abs(min(mini,minisum));

            w=max(maxi,mini);
            r=max(r,w);
        }
        return r;
    }
};