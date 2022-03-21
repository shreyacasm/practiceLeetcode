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
    int pairSum(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;

        stack<int> store;
        
        while(fast && fast->next){
            fast=fast->next->next;
            int value=slow->val;
            //cout<<"value is :"<<value<<"\n";
            store.push(value);
            slow=slow->next;
        }
        
        
        int max=0,temp=0;
        while(slow){
            temp=store.top()+slow->val;
            //cout<<"value of slow val :"<<slow->val<<"\n";
            
            if(temp>=max)
                max=temp;
            store.pop();
            if(slow->next==NULL){
                return max;
            }
            slow=slow->next;
        }
        return max;
        
    }
};