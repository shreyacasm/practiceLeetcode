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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=fast;
        
        ListNode* current=NULL;
        ListNode* head2;
        
        if(head==NULL || head->next==NULL){
            return;
        }
        //find mid and split
        fast=head->next;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        current=slow->next;
        slow->next=NULL;
        
        //reverse second LL
        ListNode* next=NULL;
        ListNode* prev=NULL;
        
        while(current){
            next=current->next;
            current->next=prev;
            
            prev=current;
            current=next;
        }
        head2 = prev;
        
        //merge
        ListNode* ptr=head;
        ListNode* ptr2=head2;
        ListNode* local=NULL;
        while(ptr2){
            local=ptr2->next;
            ptr2->next=ptr->next;
            ptr->next=ptr2;
            
            ptr=ptr2->next;
            ptr2=local;
        }
    }
};