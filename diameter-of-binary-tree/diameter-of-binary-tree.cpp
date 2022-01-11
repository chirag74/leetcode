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
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int h1=height(root->left);
        int h2=height(root->right);
        
        return 1+max(h1,h2);

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
    
    int d1=height(root->left) + height(root->right);
    int d2=diameterOfBinaryTree(root->left);
    int d3=diameterOfBinaryTree(root->right);
    
   int d=max(d1,max(d2,d3));

    return d;
    }

};