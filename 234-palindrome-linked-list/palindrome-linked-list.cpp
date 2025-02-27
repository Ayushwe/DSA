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

    ListNode* reverseLL(ListNode* head){
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(temp != NULL){
            ListNode* front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }

        // find the mid element of the LL
        ListNode* slow =  head;
        ListNode* fast =  head;
        while(fast->next != NULL && fast->next->next != NULL){
            slow = slow->next;
            fast =  fast->next->next;
        }
        ListNode* Newhead = reverseLL(slow->next);
        ListNode* second = Newhead;
        ListNode* first = head;
        while(second != NULL){
            if(first->val != second->val){
                reverseLL(Newhead);
                return false;
            }
            first = first->next;
            second = second->next;
        }
        reverseLL(Newhead);
        return true;
    }
};