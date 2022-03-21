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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* ptr=head;
        int n=1;
        
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        while(ptr->next){
            n++;
            ptr=ptr->next;
        }
        if(n==k){
            return head;
        }
        if(n<k){
            k=k%n;
        }
        while(k--){
            fast=fast->next;
        }
        while(fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        
        return head;
        
    }
};