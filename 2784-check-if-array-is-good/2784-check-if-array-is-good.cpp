class Solution {
public:
    bool isGood(vector<int>& nums) {
        int maxi=INT_MIN;
        unordered_map<int, int> mpp;
        int count_2=0;

        for(int i=0;i<nums.size();i++){

            maxi=max(maxi,nums[i]);
            
            mpp[nums[i]]++;

            if(mpp[nums[i]]>=2){   //1,2,3,2,5,5
                count_2++;
            }
        }
        if(maxi+1==nums.size() && mpp[maxi]==2 && count_2==1){
            return true;
        }
        return false;
    }
};