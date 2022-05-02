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
        
        int maxi(TreeNode* root, int &maxs){
                if(root==NULL)return 0;
                int lht=max(0,maxi(root->left,maxs));
                int rht=max(0,maxi(root->right,maxs));
                maxs=max(maxs,lht+rht+root->val);
                return max(lht,rht)+root->val;
        }
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
                return 0;
            int maxs=INT_MIN;
            maxi(root,maxs);
              
            return maxs;    
            
    }
};