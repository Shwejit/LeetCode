class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //BRUTE FORCE
        // int product =nums[0];
        int maxproduct =nums[0];
        for(int i=0;i<nums.size();i++){
            product =1;
            for(int j=i;j<nums.size();j++){
                product*=nums[j];
                maxproduct=max(maxproduct,product);
            }
        }
        return maxproduct;

        //OPTIMAL APPROACH

        
    }
};