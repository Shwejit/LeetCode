/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 //RECURSION
// class Solution {
//     vector<int> arr;
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         if(!root){
//             return arr;
//         }
//         postorderTraversal(root->left);
//         postorderTraversal(root->right);
//         arr.push_back(root->val);

//         return arr;
//     }
// };

//USING 2 STACKS
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st1, st2;
        vector<int> ans;
        if(root==NULL) return ans;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* node= st1.top();
            st1.pop();
            st2.push(node);
            if(node->left!=NULL) st1.push(node->left);
            if(node->right!=NULL) st1.push(node->right);
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
    }
};