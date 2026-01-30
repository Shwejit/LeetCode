class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //BRUTE FORCE
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //OPTIMAL SOLUTION
        unordered_map<int,int> mpp;
        int j=0;
        while(j<nums.size()){
            if(mpp.find(nums[j])!=mpp.end()){
                return true;
            }
            mpp[nums[j]]=j;
            j++;
        }
        return false;
    }
};