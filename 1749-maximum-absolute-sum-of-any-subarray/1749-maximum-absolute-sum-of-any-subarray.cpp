class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        //OPTIMAL1
        // int minisum=nums[0];
        // int maxisum=nums[0];
        // int maxi = nums[0];
        // int mini = nums[0];


        // for(int i=1;i<nums.size();i++){
        //     maxisum=max(nums[i],maxisum+nums[i]);
        //     maxi=max(maxi,maxisum);

        //     minisum=min(nums[i],minisum+nums[i]);
        //     mini=min(mini,minisum);
        // }
        // return max(abs(maxi),abs(mini));;

        //OPTIMAL2
        int sum=0;
        int maxsum=0;
        int minsum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxsum=max(maxsum,sum);
            minsum=min(minsum,sum);
        }
        return maxsum-minsum;
    }
};