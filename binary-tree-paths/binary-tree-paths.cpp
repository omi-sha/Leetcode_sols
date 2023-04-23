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
public:
       vector<string> ans;
    void dfs(TreeNode* node, string str) {
        if(node->left == NULL &&  node->right == NULL) ans.push_back(str + to_string(node->val));
        if(node->left) dfs(node->left, str + to_string(node->val) + "->");
        if(node->right) dfs(node->right, str + to_string(node->val) + "->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
    dfs(root,"");
    return ans;
        
    }
};