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
    int getLength(ListNode* head) {
        int count = 0;
        while (head != nullptr) {
            count++;
            head = head->next;
        }
        return count;
    }

    ListNode* middleNode(ListNode* head) {
       int length = getLength(head);
       length = (length/2)+1;
       ListNode* temp = head;
       int count=0;
       while(temp!=NULL){
        count++;
        if(count==length){
            break;
        }
        temp = temp->next;
       }
       return temp;
    }
};
