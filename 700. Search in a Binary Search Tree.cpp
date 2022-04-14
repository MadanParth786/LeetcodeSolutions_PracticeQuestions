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
class Solution {
    void dfs(TreeNode* root, int val, TreeNode*& ans) {
        if(!root) return;
    
        if(root->val == val) {
            ans = root;
        } else if(root->val > val) {
            dfs(root->left, val, ans);
        } else if(root->val < val) {
            dfs(root->right, val, ans);
        }
        
    }
public:
    TreeNode* searchBST(TreeNode* root, int val) {
         TreeNode* ans = nullptr;
        dfs(root, val, ans);
        
        return ans;
    }
};
