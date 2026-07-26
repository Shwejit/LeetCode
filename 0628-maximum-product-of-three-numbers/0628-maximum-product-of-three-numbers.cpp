class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int fl=-1000;
        int sl=-1000;
        int tl=-1000;

        int fs=INT_MAX;
        int ss=INT_MAX;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>fl){
                tl=sl;
                sl=fl;
                fl=nums[i];
            }
            else if(nums[i]>sl){
                tl=sl;
                sl=nums[i];
            }
            else if(nums[i]>tl){
                tl=nums[i];
            }

            if(nums[i]<fs){
                ss=fs;
                fs=nums[i];
            }
            else if(nums[i]<ss){
                ss=nums[i];
            }
        }

        return max((fl*sl*tl),(fl*ss*fs));

    }
};