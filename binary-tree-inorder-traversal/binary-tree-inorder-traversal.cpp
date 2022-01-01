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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> s;
        if(root==NULL){
            return s;
        }
        vector<int> x;
        if(root->left!=NULL){
        
        x=inorderTraversal(root->left);
            s.insert(s.end(),x.begin(),x.end());
        
        }
        
         s.push_back(root->val);
           if(root->right!=NULL){
        
        x=inorderTraversal(root->right);
            s.insert(s.end(),x.begin(),x.end());
        
        }
        return s;
    }
};