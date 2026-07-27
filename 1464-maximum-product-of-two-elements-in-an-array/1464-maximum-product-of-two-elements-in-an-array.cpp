class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fl=INT_MIN;
        int sl=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>fl){
                sl=fl;
                fl=nums[i];
            }
            else if(nums[i]>sl){
                sl=nums[i];
            }
        }
        return (fl-1)*(sl-1);
    }
};