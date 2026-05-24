class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int n = nums.size();
        int zeros = 0;
        int swaps = 0;

        for(int num : nums){

            // Count total zeros processed
            if(num == 0){

                zeros++;

                // Check target position from end
                if(nums[n - zeros] != 0)
                    swaps++;
            }
        }

        return swaps;
    }
};