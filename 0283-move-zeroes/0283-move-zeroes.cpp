class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int countZeroes=0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countZeroes++;
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        int j=nums.size()-1;
        while(countZeroes>0){
            nums[j]=0;
            j--;
            countZeroes--;
        }

    }
};