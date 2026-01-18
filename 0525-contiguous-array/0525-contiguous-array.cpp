class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //BRUTE FORCE
        // int sum=0;
        // int len=0;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==1){
        //             sum++;
        //         }
        //         else{
        //             sum--;
        //         }
        //         if(sum==0){
        //             len=max(len, j-i+1);
        //         }
        //     }
        // }
        // return len;

        //OPTIMAL
        unordered_map<int,int> mpp;
        int len=0;
        mpp[0]=-1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum+=1;
            }
            else{
                sum-=1;
            }
            if(mpp.find(sum)!=mpp.end()){
                len=max(len,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
        return len;
    }
};