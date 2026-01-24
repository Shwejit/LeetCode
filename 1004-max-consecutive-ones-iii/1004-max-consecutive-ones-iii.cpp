class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        //BRUTE FORCE
        // int sum=0;
        // int maxsum=0;
        // int countzero=0;
        // for(int i=0;i<nums.size();i++){
        //     sum=0;
        //     countzero=0;
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]==1 ){
        //             sum++;
        //         }
        //         else{
        //             if(countzero<k){
        //                 sum++;
        //                 countzero++;
        //             }
        //             else{
        //                 break;
        //             }
        //         }
        //         maxsum=max(maxsum,sum);
        //     }
        // }
        // return maxsum;


        //OPTIMAL APPROACH
        int i=0;
        int j=0;
        int countzero=0;
        int maxlen=0;
        while(j<nums.size()){
            if(nums[j]==1){
                j++;
            }
            else{
                if(countzero<k){
                    j++;
                    countzero++;
                }
                else{
                    maxlen=max(maxlen,j-i);
                    if(nums[i]==0){
                        countzero--;
                    }
                    i++;
                }
            }
            maxlen=max(maxlen,j-i);

        }
        return maxlen;
    }
};