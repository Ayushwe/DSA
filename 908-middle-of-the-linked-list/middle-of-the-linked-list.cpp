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
    // int getLength(ListNode* head) {
    //     int count = 0;
    //     while (head != nullptr) {
    //         count++;
    //         head = head->next;
    //     }
    //     return count;
    // }

    ListNode* middleNode(ListNode* head) {
        if (head == nullptr) // Check if the list is empty
            return nullptr;

    //     int length = getLength(head);
    //     int mid = length / 2;
    //     ListNode* temp = head;
    //     int cnt = 0;
    //     while (cnt < mid) {
    //         temp = temp->next;
    //         cnt++;
    //     }
    //     return temp; // Return the middle node
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        }
        return slow;
    }
};
