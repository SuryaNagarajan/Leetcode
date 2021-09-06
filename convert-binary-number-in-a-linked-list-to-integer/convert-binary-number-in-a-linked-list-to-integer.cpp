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
    int getDecimalValue(ListNode* head) {
        string n;
        
        while(head){
            n+=to_string(head->val);
            head=head->next;
        }
        
        int p=0,ans=0;
        
        for(int i=n.size()-1;i>=0;i--){
            ans+=(n[i]-'0')*pow(2,p++);
        }
        
        return ans;
        
    }
};