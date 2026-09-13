class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> newArray(nums.size());
        int right=1;
        newArray[0]=1;
        for(int i=1;i<nums.size();i++){
            newArray[i]=newArray[i-1]*nums[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            newArray[i]=newArray[i]*right;
            right=right*nums[i];
        }
        return newArray;
    }
};