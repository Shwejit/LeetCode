class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //BRUTE FORCE -> TLE
        // vector<int> ans;
        // for(int i=0;i<temperatures.size();i++){
        //     bool found=false;
        //     for(int j=i+1; j<temperatures.size();j++){
        //         if(temperatures[j]>temperatures[i]){
        //             ans.push_back(j-i);
        //             found=true;
        //             break;
        //         }
        //     }
        //     if(!found){
        //             ans.push_back(0);
        //     }
        // }
        // return ans;

        //OPTIMAL APPROACH
        int n=temperatures.size();
        stack<int> st;
        vector<int> ans(n,0);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i] = st.top()-i;
            }
            st.push(i);
        }
        return ans;

    }
};