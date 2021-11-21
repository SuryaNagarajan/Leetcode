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
   TreeNode* buildTree(vector<int>& in, vector<int>& po) {
        return help(in,0,in.size()-1,po,0,po.size()-1);
    }
    
    TreeNode* help(vector<int> in,int x,int y,vector<int> po,int a,int b)
    {
        if(a>b||x>y) return NULL;
        
        TreeNode* temp=new TreeNode(po[b]);
        int s=x;
        while(temp->val!=in[s])s++;
        
        temp->left=help(in,x,s-1,po,a,a+s-x-1);
        temp->right=help(in,s+1,y,po,a+s-x,b-1);
        
        return temp;
    }
};