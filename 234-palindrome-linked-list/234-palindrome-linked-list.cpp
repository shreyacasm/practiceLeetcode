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
    bool isPalindrome(ListNode* head) {
        ListNode* ptr=head;
        
        stack<int> store;
        
        while(ptr){
            store.push(ptr->val);
            ptr=ptr->next;
        }
        
        while(head){
            int i=store.top();
            store.pop();
            //cout<<i<<" ";
            if(head->val!=i){
                return false;
            }
            head=head->next;
        }
        return true;
    }
};