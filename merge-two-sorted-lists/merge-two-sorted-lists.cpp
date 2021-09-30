/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return NULL;
        if(!l1 && l2) return l2;
        else if(l1&&!l2) return l1;
        if(l1->val <= l2->val){
            ListNode *root=new ListNode(l1->val);
             help(root,l1->next,l2);
            return root;
        }else{
             ListNode *root=new ListNode(l2->val);
             help(root,l1,l2->next);
            return root;
        }
        
        return NULL;
    }
    
    void help(ListNode *root,ListNode *l1,ListNode *l2){
        if(!l1 &&!l2) return;
        if(!l1 && l2) {
           while(l2){
               root->next=new ListNode(l2->val);
               root=root->next;
               l2=l2->next;
           }
            return;
        }else if(l1 && !l2){
           while(l1){
               root->next=new ListNode(l1->val);
               root=root->next;
               l1=l1->next;
           }
            return;
        }
        
        if(l1->val <=l2->val){
            root->next=new ListNode(l1->val);
            help(root->next,l1->next,l2);
        }else{
            root->next=new ListNode(l2->val);
            help(root->next,l1,l2->next);
        }
    }
};