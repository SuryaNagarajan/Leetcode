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
    int maxPathSum(TreeNode* root) {
       int maxi=INT_MIN;
        
        DFS(root,maxi,0);
        
        return maxi;
    }
    
    int DFS(TreeNode* root,int&maxi,int sum){
        if(!root) return 0;
        
        int left=max(0,DFS(root->left,maxi,sum));
        int right=max(0,DFS(root->right,maxi,sum));
        
        maxi=max(maxi,root->val+left+right);
        
        return max(left,right)+root->val;
    }
};