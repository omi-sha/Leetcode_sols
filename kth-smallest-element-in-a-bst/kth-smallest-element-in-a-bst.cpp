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
void inorder(TreeNode*root, vector<int>&ans)
{
    if(root==NULL)
    return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
    int kthSmallest(TreeNode* root, int k) {
    vector<int> ans;
    inorder(root,ans);
    
        if(ans.size()<k) 
        // If the size of the ans vector is less than k, it means that the BST has less than k nodes. In this case, the function returns -1, indicating that the kth smallest element does not exist.
        {
            return -1;
        }
    
        return ans[k-1];
        
    }
};