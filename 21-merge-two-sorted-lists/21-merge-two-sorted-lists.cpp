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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* nhead=NULL;
        ListNode* current=NULL;
        ListNode* ptr1=list1;
        ListNode* ptr2=list2;
        if(ptr1==NULL){
            return ptr2;
        }
        if(ptr2==NULL){
            return ptr1;
        }
        if(ptr1->val<ptr2->val){
            nhead=ptr1;
            ptr1=ptr1->next;
            nhead->next=current;
        }
        else{
            nhead=ptr2;
            ptr2=ptr2->next;
            nhead->next=current;
        }
        current=nhead;
        // cout<<" here ptr 1 and ptr2 are"<<ptr1->val<<" "<<ptr2->val;
        // cout<<" elements are "<<nhead->val<<" ";
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->val<ptr2->val){
                current->next=ptr1;
                current=current->next;
                
                ptr1=ptr1->next;
                current->next=NULL;
                
                //cout<<current->val<<" ";
            }
            else{
                current->next=ptr2;
                current=current->next;
                
                ptr2=ptr2->next;
                current->next=NULL;
                //cout<<current->val<<" ";
            }    
        }
        if(ptr1){
            while(ptr1){
                current->next=ptr1;
                current=current->next;
                ptr1=ptr1->next;
            }
        }
        
        if(ptr2){
            while(ptr2){
                current->next=ptr2;
                current=current->next;
                ptr2=ptr2->next;
            }
        }
        return nhead;
    }
};