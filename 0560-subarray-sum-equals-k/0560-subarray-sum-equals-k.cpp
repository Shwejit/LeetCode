class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //BRUTE FORCE
        // int count = 0;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        //OPTIMAL
        unordered_map<int, int> mpp;
        int sum=0;
        int count=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            if(mpp.find(sum-k) != mpp.end())
            {
                count+=mpp[sum-k];
            }
            mpp[sum]++;
        } 
        return count;
    }
};