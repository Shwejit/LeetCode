class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumr=0;
        int suml=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=i-1;
            sumr=0;
            suml=0;
            while(j<nums.size()){
                sumr+=nums[j];
                j++;
            }
            while(k>=0){
                suml+=nums[k];
                k--;
            }
            if(suml==sumr){
                return i;
            }
        }
         return -1;
    }
};