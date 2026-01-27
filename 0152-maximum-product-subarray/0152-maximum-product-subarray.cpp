class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product =nums[0];
        int maxproduct =nums[0];
        for(int i=1;i<nums.size();i++){
            product = max (nums[i], nums[i]*product);
            maxproduct = max(maxproduct, product);
        }
        return maxproduct;
        
    }
};