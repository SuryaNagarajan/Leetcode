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
    
    int sumNumbers(TreeNode* root) {
      string s="";
        int ans=0;
        help(root,s,ans);
        return ans;
    }
    
    void help(TreeNode* root,string&s, int&ans){
        if(!root) return;
        s+=to_string(root->val);
        if(!root->left && !root->right){
            ans+=stoi(s);
        }
        help(root->left,s,ans);
        help(root->right,s,ans);
        s.pop_back();
        
    }
};