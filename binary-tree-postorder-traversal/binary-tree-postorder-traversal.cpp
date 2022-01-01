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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> s;
        if(root==NULL){
            return s;
            
        }
        vector<int> r;
        
        if(root->left!=NULL){
            r=postorderTraversal(root->left);
            s.insert(s.end(),r.begin(),r.end());
        }
         if(root->right!=NULL){
            r=postorderTraversal(root->right);
            s.insert(s.end(),r.begin(),r.end());
        }
        s.push_back(root->val);
        
        return s;
        
        
    }
};