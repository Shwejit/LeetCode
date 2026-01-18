class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        int suml=0;
        int sumr=0;
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
           if(i>0){
                suml=nums[i-1];
            }
            sumr=nums[nums.size()-1]-nums[i];
            if(suml==sumr){
                return i;
            }
            
        }
        return -1;   
    }
};