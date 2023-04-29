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
int get_minimum_on_right_subtree(TreeNode* root)
{
    root = root->right;
    while(root->left != NULL) root = root->left;
    return root->val;
}

TreeNode* deleteNode(TreeNode* root, int key) 
{
    if(root == NULL) return NULL;

    if(key > root->val)
    {
        root->right = deleteNode(root->right, key);
    }
    else if(key < root->val)
    {
        root->left = deleteNode(root->left, key);
    }
    else
    {
        // Key found
        // Either both child don't exist or left child don't exist
        if(root->left == NULL)
        {
            TreeNode* right_child = root->right;
            delete(root);
            return right_child;
        }
        // right child don't exist
        else if(root->right == NULL)
        {
            TreeNode* left_child = root->left;
            delete(root);
            return left_child;
        } 
        // Both children are present
        else
        {
            int replace = get_minimum_on_right_subtree(root);
            root->val = replace;
            root->right = deleteNode(root->right, replace);
        }
    }

    return root;
}
        
    
};