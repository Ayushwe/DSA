/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode(int x) {
 * val = x;
 * next = null;
 * }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode temp1 = headA;
        ListNode temp2 = headB;
        int LengthA = 0;
        int LengthB = 0;
        while (temp1 != null) {
            LengthA++;
            temp1 = temp1.next;
        }
        while (temp2 != null) {
            LengthB++;
            temp2 = temp2.next;
        }
        temp1 = headA;
        temp2 = headB;

        int diff = Math.abs(LengthA-LengthB);
        if(LengthA>LengthB){
            while(diff>0){
                diff--;
                temp1 = temp1.next;
            }
        }
        else if(LengthB>LengthA){
            while(diff>0){
                diff--;
                temp2 = temp2.next;
            }
        }

        while (temp1 != null && temp2 != null) {
            if (temp1 == temp2) {
                return temp1;
            }
            temp1 = temp1.next;
            temp2 = temp2.next;
        }
        return null;
    }
}