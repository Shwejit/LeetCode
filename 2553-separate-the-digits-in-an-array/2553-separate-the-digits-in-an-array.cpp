class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
            stack<int> st;
            while(number>0){
                int digit=number%10;
                st.push(digit);
                number=number/10;
            }
            while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
            }
        }
        return ans;
    }
};