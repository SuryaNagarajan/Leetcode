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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if((!l1 && l2) || (!l1 && !l2)) return l2;
        if(l1 && !l2) return l1;
        
        return help(l1,l2);
    }
    
    ListNode* help(ListNode* l1,ListNode* l2){
        if((!l1 && l2) || (!l1 && !l2)) return l2;
        if(l1 && !l2) return l1;
        
        int sum=l1->val + l2->val;
        ListNode* root=new ListNode(sum%10);
        root->next=help(l1->next,l2->next);
        if(sum>9) root->next=help(root->next,new ListNode(1));
        
        return root;
    }
};