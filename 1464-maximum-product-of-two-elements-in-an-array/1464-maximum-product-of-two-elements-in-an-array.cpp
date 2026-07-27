class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fl=INT_MIN;
        int sl=INT_MIN;
        unordered_map<int, int> mpp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>fl){
                sl=fl;
                fl=nums[i];
                mpp[fl]=i;
            }
            else if(nums[i]>sl){
                sl=nums[i];
                mpp[sl]=i;
            }
        }
        return (fl-1)*(sl-1);
    }
};