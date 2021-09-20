/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxi=0;
    int maxDepth(Node* root) {
        if(!root) return maxi;
        
        queue<Node*> q;
        
        q.push(root);
        
        while(!q.empty()){
            maxi++;
            int s=q.size();
            for(int i=0;i<s;i++){
                Node *f=q.front();
                q.pop();
                vector<Node*> v=f->children;
                
                
                for(int i=0;i<v.size();i++){
                    q.push(v[i]);
                }
            }
        }
        
        return  maxi;
    }
    
  
};