class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //BRUTE_FORCE
        // int sum=0;
        // int maxsum=INT_MIN;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         maxsum=max(maxsum,sum);
        //     }
        // }
        // return maxsum;

        //OPTIMAL APPROACH -> USING KADANE'S ALGORITHM
        int sum=0;
        int maxsum=INT_MIN;
        int i=0;
        while(i<nums.size()){
            sum=max(nums[i],sum+nums[i]);
            maxsum=max(maxsum,sum);
            i++;
        }
        return maxsum;
    }
};