class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        //BRUTE FORCE
        // vector<int> ans;
        // for(int i=0;i<nums1.size();i++){
        //     bool found=false;
        //     for(int j=0;j<nums2.size();j++){
        //         if(nums1[i]==nums2[j]){
        //             int k=j+1;
        //             while(k<nums2.size()){
        //                 if(nums2[k]>nums1[i]){
        //                     ans.push_back(nums2[k]);
        //                     found=true;
        //                     break;
        //                 }
        //                 k++;
        //             }
        //             if(found==false) ans.push_back(-1);
        //             break;
        //         }
        //     }
        // }
        // return ans;


        //OPTIMAL USING STACK
        vector<int> ans;
        stack<int> st;
        unordered_map<int, int> mpp;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            mpp[nums2[i]]= st.empty()? -1:st.top();
            st.push(nums2[i]);
        }

        for(int x:nums1){
            ans.push_back(mpp[x]);
        }
        return ans;
    }
};