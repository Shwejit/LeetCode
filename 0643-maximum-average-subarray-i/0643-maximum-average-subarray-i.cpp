class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        //BRUTE FORCE
        // double sum;
        // double maxsum=INT_MIN;
        // for(int i=0;i<=nums.size()-k;i++){
        //     sum=0.0;
        //     for(int j=i;j-i+1<=k;j++){
        //         sum+=nums[j];
        //     }
        //     sum=sum/k;
        //     maxsum=max(sum,maxsum);
        // }
        // return maxsum;

        //OPTIMAL APPROACH
        int i=0;
        int j=0;
        double maxSumAvg=INT_MIN;
        double sum=0.0;
        double sumAvg=0.0;

        while(j<nums.size()){
            sum+=nums[j];
            if(j-i+1==k){
                sumAvg=sum/k;
                maxSumAvg=max(maxSumAvg,sumAvg);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return maxSumAvg;
    }
};