class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int minlen=nums.size()+1;
        while(j<nums.size()){
            sum+=nums[j];
            while(sum>=target){
                minlen=min(minlen,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return minlen == nums.size()+1? 0:minlen;
    }
};