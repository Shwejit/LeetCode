class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        bool got = false;
        int multiple = 0;
        while (true) {
            multiple += k;
            got=false;
            for (int j = 0; j < nums.size(); j++) {
                if (multiple == nums[j]) {
                    got = true;
                    break;
                }
            }
            if (got == false) {
                return multiple;
            }
           
        }
        return multiple;
    }
};