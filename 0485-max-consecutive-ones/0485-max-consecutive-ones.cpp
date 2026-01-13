class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // int count =0;
        // int maxcount=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         count++;
        //     }
        //     else{
        //         count = 0;
        //     }
        //         maxcount=max(count,maxcount);

        // }
        // return maxcount;


        //USING 2 POINTER
        int i=0;
        int j=0;
        int count=0;
        while(j<nums.size()){
            if(nums[j]==1){
                j++;
                continue;
            }
            count = max(count, j-i);
            i=j+1;
            j++;
        }
        count = max(count, j-i);

        return count;
    }
};