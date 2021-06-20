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
        ListNode *sum = new ListNode(0);
        ListNode **c=&sum;
        
        int carry = 0;
        while(l1!=NULL || l2!=NULL){
            int aval=0, bval=0;
            if(l1!=NULL){
                aval=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                bval=l2->val;
                l2=l2->next;
            }
            int add = carry+aval+bval;
            (*c)=new ListNode(add%10);
            c=&((*c)->next);
            carry=add/10;
        }
        if(carry>0){
            (*c)= new ListNode(carry);
            c=&((*c)->next);
        }
        return sum;
    }
};