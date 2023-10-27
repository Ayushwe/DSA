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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cursor = head;
        for(int i = 0; i < k; i++){
            if(cursor == nullptr) return head;
            cursor = cursor->next;
        }
        ListNode*prev=NULL;
        ListNode*current=head;
        ListNode*forward=current->next;
        int count=0;
        while(current!=NULL && count<k){
            forward=current->next;
            current->next=prev;
            prev=current;
            current=forward;
            count++;
        }
        if(forward!=NULL){
            head->next=reverseKGroup(forward,k);
        }
        return prev;
    }
};