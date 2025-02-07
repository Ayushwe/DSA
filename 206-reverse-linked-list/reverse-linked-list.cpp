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

       ListNode*reverse(ListNode*&head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* NewHead=reverse(head->next);
        ListNode* front = head->next;
        front->next=head;
        head->next=NULL;
        return NewHead;
    }
    ListNode* reverseList(ListNode* head) {
        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        // ListNode*temp = head;
        // ListNode* prev = NULL;
        // ListNode* forward = head;
        // while(temp){
        //     forward = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = forward;
        // }
        // return prev;
        return reverse(head);
        // return ans;
    }
};